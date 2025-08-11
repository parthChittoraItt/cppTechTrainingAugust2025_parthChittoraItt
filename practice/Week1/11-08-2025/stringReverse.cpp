#include <iostream>
using namespace std;
string reverseString(string &str)
{
    string strRev = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        strRev.push_back(str[i]);
    }
    return strRev;
}
bool isPalindrome(string &str)
{
    string strRev = reverseString(str);
    return str == strRev;
}
int main()
{
    cout << "Enter a string to reverse: ";
    string str;
    getline(cin, str);
    cout <<"Reversed : "<< reverseString(str) << endl;
    cout<< "Is the string a palindrome? " << (isPalindrome(str) ? "Yes" : "No") << endl;
    return 0;
}