#include <iostream>
using namespace std;

bool isPalindrom(string &str , int i, int j)
{
    // Base Case:
    if(i > j)
        return true;

    if(str[i] != str[j])
        return false;
    // Recursive Call
    else{
        isPalindrom(str, i+1, j-1);
    }   
}
    
int main() {
    string str;
    cout << "Enter String : ";
    cin>>str;

    bool checkPalindrom = isPalindrom(str, 0, str.length()-1);
    if(checkPalindrom)
        cout<<"Palindrome";
    else
        cout << "Not Palindrome";

    
    return 0;
}