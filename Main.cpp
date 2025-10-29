#include <iostream>
using namespace std;
void Numeric(string a) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            cout << "Numeric" << endl;
            break;

        }
        else{

            cout << "Not Numeric" << endl;
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

void Identifier(string b){
   if (!((b[0] >= 'a' && b[0] <= 'z') || (b[0] >= 'A' && b[0] <= 'Z') || (b[0] == '_'))) {
        cout << "Invalid Identifier" << endl;
        return;
        
    } 
    else {
        
        for (int i = 1; i < b.length(); i++) {
            if (!((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z') || (b[i] >= '0' && b[i] <= '9') || (b[i] == '_'))) {
                cout << "Invalid Identifier" << endl;
                return;

                
            }
            
        }
    }

     cout << "Valid Identifier" << endl;

    
}


double findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  
    }
    double avg  = sum / n; 
    cout << "Average value of array elements = " << avg << endl;

     
}

void findMinMax(int arr[], int n) {
    int minval = arr[0];
    int maxval = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minval)
            minval = arr[i];
        if (arr[i] > maxval)
            maxval = arr[i];
    }

    cout << "Minimum value: " << minval << endl;
    cout << "Maximum value: " << maxval << endl;
}

void NameConcatenate(string x , string y) {
   cout<<"Full name = "<<x<<" "<<y;
}

int main()
{
  cout << "1 - Numeric Define"<<endl;
  cout << "2 - Operators Define"<<endl;
  cout << "3 - Comment Define"<<endl;
  cout << "4 - Indetifier Define"<<endl;
  cout << "5 - Find Average"<<endl;
  cout << "6 - Find min value and max value"<<endl;
  cout << "7-  Name concatenate "<<endl;
  cout<<endl;
  int op;
  cout<<"Enter your option = ";
  cin>>op;

   switch(op) {
        case 1: {
            string input;
            cout << "Enter a string: ";
            cin>>input;
            Numeric(input);
            break;
        }
        case 2: {
            string input;
            cout << "Enter a string: ";
            cin>>input;
            Operators(input);
            break;
        }
        case 3: {
            string input;
            cout << "Enter a string: ";
            cin>>input;
            Comment(input);
            break;
        }
        case 4: {
            string input;
            cout << "Enter an identifier: ";
            cin>>input;
            Identifier(input);
            break;
        }
        case 5: {
            int n;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter array elements: ";
            for(int i = 0; i < n; i++) cin >> arr[i];
            findAverage(arr, n);
            break;
        }
        case 6: {
            int n;
            cout << "Enter size of array: ";
            cin >> n;
            int arr[n];
            cout << "Enter array elements: ";
            for(int i = 0; i < n; i++) cin >> arr[i];
            findMinMax(arr, n);
            break;
        }
        case 7: {
            string fname, lname;
            cout << "Enter first name: ";
            cin >> fname;
            cout << "Enter last name: ";
            cin >> lname;
            NameConcatenate(fname, lname);
            break;
        }
        default:
            cout << "Invalid option!" << endl;
    }



    return 0;
}
