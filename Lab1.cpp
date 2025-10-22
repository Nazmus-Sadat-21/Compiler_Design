#include <iostream>

using namespace std;
void Numeric(string a) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            cout << " Numeric" << endl;
            break;

        }
        else{

            cout << " Not Numeric" << endl;
            break;
        }

    }

}

void Operators(string b) {
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == '+' || b[i] == '-'|| b[i] == '*'|| b[i] == '/'|| b[i] == '=') {
            cout << "Operator : " <<i << " "<<b[i]<< endl;


        }

    }

}

void Comment(string c) {
    for (int i = 0; i < c.length(); i++) {
        if(c[i] == '/'&& c[i+1]=='/'){
            cout << "Single Line Comment" << endl;
        }
        else if(c[i]=='/' && c[i+1] == '*'&& c[c.length()-2] == '*' && c[c.length()-1] == '/'){
             cout << "Multiple Line Comment" << endl;
        }


    }

}

int main()
{

    string a , b , c ;

   cin>>a;
   Numeric(a);

   cin>>b;
   Operators(b);

   cin>>c;
   Comment(c);



    return 0;
}
