#include<iostream>
using namespace std;
int main(){
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;

    string str2 = "Parth At ITT";
    string res = str+" " + str2;
    cout << "Concatenated String: " << res << endl;
    
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;

    cout<<"Entering string through cin: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    // Convert to uppercase
    for (char &c : str) {
        c = toupper(c);
    }
    cout << "Uppercase String: " << str << endl;

    // Convert to lowercase
    for (char &c : str) {
        c = tolower(c);
    }
    cout << "Lowercase String: " << str << endl;

  return 0;
}