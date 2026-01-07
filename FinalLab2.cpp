#include <iostream>
using namespace std;

void RE_1() {
    string s;
    cout << "Enter a string = ";
    getline(cin, s);

    int i = 0;
    int n = s.length();

  
    while (i < n && s[i] == 'b') {
        i++;
    }

   
    if (i >= n || s[i] != 'a') {
        cout << "Invalid";
        return;
    }
    i++;

    
    while (i < n) {
        if (s[i] == 'a') {
            i++;  
        }
        else if (s[i] == 'b') {
            if (i + 2 < n && s[i + 1] == 'a' &&
                (s[i + 2] == 'a' || s[i + 2] == 'b')) 
            {
                i += 3; 
            } 
            else 
            {
                cout << "Invalid";
                return;
            }
        }
        else {
            cout << "Invalid";
            return;
        }
    }

    cout << "Valid";

}

int main() {
    RE_1();
    return 0;
}
