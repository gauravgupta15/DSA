#include <iostream>
#include <string>
#include <vector>
using namespace std;
    string evenRemove(string str) {
        string s ="";
        for(int i=0; i<str.length(); i++) {
            char ch = tolower(str[i]); 
            if(ch != 96 && ch != 'e' && ch !='i' && ch != 'o' && ch != 'u') {
                s+=ch;
            }
        }

        return s;
    }

int main() {
    
    string str;
    cout << "enter the string: ";

    cin>>str;

    string Consonant = evenRemove(str);
    cout << Consonant;
    
    return 0;
}