#include<iostream>
using namespace std;

void  RE_1(){
    string s ;
    cout<<"Enter a string = ";
    //cin>>s;
    //cin.ignore();
    getline(cin, s);

    if(s.length()==0){
        cout<<"Invalid";
        return;
    }

    if(s[0]==' '){
        cout<<"Valid";
        return;
    }

    for(int i =0;i<s.length();i++){
        if(s[i]!='a'){
            cout<<"Invalid";
            return;
        }
       
    }
    cout<<"Valid";
   
}

void RE_2(){
    string s ;
    cout<<"Enter a string = ";   
    getline(cin, s);

    if(s[0]==' '){
        cout<<"Invalid";
        return;
    }
    if(s == "a"){
        cout<<"Valid";
        return;
    }
    if(s == "b"){
        cout<<"Valid";
        return;
    }
    if(s.length() >= 1){
        cout<<"Invalid";
        return;
    }
    cout << "Invalid";
}

void RE_3(){
    string s ;
    cout<<"Enter a string = ";   
    getline(cin, s);

    if(s[0]==' '){
        cout<<"Invalid";
        return;
    }

    if(s == "ab"){
        cout<<"Valid";
        return;
    }
    if(s.length() >= 2){
        cout<<"Invalid";
        return;
    }

    cout << "Invalid";

}

void RE_4(){
    string s ;
    cout<<"Enter a string = ";   
    getline(cin, s);

    if(s[0]==' '){
        cout<<"Invalid";
        return;
    }

    if(s == "ab" || s=="ba" || s== "aa" || s=="bb"){
        cout<<"Valid";
        return;
    }
    if(s.length() >= 2){
        cout<<"Invalid";
        return;
    }

    cout << "Invalid";

}

void RE_5(){
    string s;
    cout << "Enter a string = ";
    getline(cin, s);

    
    if(s.length() < 2){
        cout << "Invalid";
        return;
    }

    
    if(s[s.length()-2] != 'b' && (s[s.length()-1] != 'a' || s[s.length()-1] != 'b')){
        cout << "Invalid";
        return;
    }

    
    for(int i = 0; i < s.length() - 2; i++){
        if(s[i] != 'a' && s[i] != 'b'){
            cout << "Invalid";
            return;
        }
    }

    cout << "Valid";
}



int main(){
    //RE_1();
    //RE_2();
    //RE_3();
    //RE_4();
    RE_5();
  

    return 0 ;
}