#include<iostream>
#include<fstream>
using namespace std;

bool isLetter(char c){
    return ( (c >= 'a' && c <= 'z') ||
             (c >= 'A' && c <= 'Z') ||
             c == '_' );
}

bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

bool isKeyword(string s){
    return (s == "int" || s == "main" || s == "return");
}

void IdentifierChecking(string b){
     if (!((b[0] >= 'a' && b[0] <= 'z') || (b[0] >= 'A' && b[0] <= 'Z') || (b[0] == '_'))) {
        cout <<b << "- Invalid Identifier" << endl;
        return;
        
    } 
    
    else {
        
        for (int i = 1; i < b.length(); i++) {
           
            if (!((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z') || (b[i] >= '0' && b[i] <= '9') || (b[i] == '_'))) {
                cout << b << " - Invalid Identifier" << endl;
                return;

                
            }
            
        }
    }

     cout << b << " - Valid Identifier" << endl;

        
}

bool isValidIdentifier(string s){

    IdentifierChecking(s);
    
}


void Tokenize(string b){

    int i = 0;
   
    while(i < b.length()){

        if(b[i] == ' '){
            i++;
            continue;
        }

     
       

        if(isLetter(b[i])){
            //cout<<"Line "<<i+1<<endl;
            string temp = "";

            while(i < b.length() && (isLetter(b[i]) || isDigit(b[i]))){
                temp += b[i++];
            }

            if(isKeyword(temp))
                cout << temp << " = KEYWORD\n";
            else{

                cout << temp << " = IDENTIFIER\n";
            }
            continue;
        }

        if(isDigit(b[i])){
            string num = "";

            while(i < b.length() && isDigit(b[i])){
                num += b[i++];
            }

            cout << num << " = CONSTANT\n";
            continue;
        }

        char c = b[i];

        if(c == '=') cout << "= = OPERATOR\n";
        else if(c == '(') cout << "( = Punctuation\n";
        else if(c == ')') cout << ") = Punctuation\n";
        else if(c == '{') cout << "{ = Punctuation\n";
        else if(c == '}') cout << "} = Punctuation\n";
        else if(c == ';') cout << "; = Punctuation\n";
        else if(c == ',') cout << ", = Punctuation\n";
        else cout << c << " = UNKNOWN\n";

        i++;
    }
}



int main(){

    ifstream file("Sample.txt");
    string line;

    bool identifierPhase = true;  
    int count = 0;

    while(getline(file, line)){

        
        if(line.size() == 0){
            
            identifierPhase = false;
            continue;
        }

        if(identifierPhase){
        
            isValidIdentifier(line);
        }
        else{
            
            count++;
            cout << "Line " << count << endl;
            Tokenize(line);
        }
    }

    return 0;
}
