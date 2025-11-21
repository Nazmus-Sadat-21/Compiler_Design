#include<iostream>
#include<fstream>
using namespace std;

bool isLetter(char c){
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           c == '_';
}

bool isDigit(char c){
    return (c >= '0' && c <= '9');
}

// Only int and main are keywords
bool isKeyword(string s){
    if(s == "int") return true;
    if(s == "main") return true;
    return false;
}

void Tokenize(string b){

    int i = 0;

    while(i < b.length()){

 
        if(b[i] == ' '){
            i++;
            continue;
        }

       
        if(isLetter(b[i])){
            string temp = "";
            temp += b[i];
            i++;

            while(i < b.length() && (isLetter(b[i]) || isDigit(b[i]))){
                temp += b[i];
                i++;
            }

            if(isKeyword(temp))
                cout << temp << " --> KEYWORD" << endl;
            else
                cout << temp << " --> IDENTIFIER" << endl;

            continue;
        }

      
        if(isDigit(b[i])){
            string num = "";
            num += b[i];
            i++;

            while(i < b.length() && isDigit(b[i])){
                num += b[i];
                i++;
            }

            cout << num << " --> NUMBER" << endl;
            continue;
        }

  
        char c = b[i];

        if(c == '=') cout << "= --> OPERATOR" << endl;
        else if(c == '(') cout << "( --> LEFT_PAREN" << endl;
        else if(c == ')') cout << ") --> RIGHT_PAREN" << endl;
        else if(c == '{') cout << "{ --> LEFT_BRACE" << endl;
        else if(c == '}') cout << "} --> RIGHT_BRACE" << endl;
        else if(c == ';') cout << "; --> SEMICOLON" << endl;
        else if(c == ',') cout << ", --> COMMA" << endl;
        else cout << c << " --> UNKNOWN" << endl;

        i++;
    }
}

int main(){
    ifstream file("Sample.txt");
    string line;

    while(getline(file, line)){
        Tokenize(line);  /
    }

    return 0;
}
