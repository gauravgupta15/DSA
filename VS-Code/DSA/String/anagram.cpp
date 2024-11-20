#include <iostream>
#include <string>
using namespace std;
    
int main() {
    string s = "abaebabaad";
    string t = "abc";
        bool check = false;

    for(int i=0; i<s.length(); i++) {
        string str = s.substr(i, t.length());
        int j =0,k=0;

        while(j < t.length()) {
            if(str[k] != s[j]) {
                k++;
                check =false;
            } 
            else if(str[k] == s[j]) {
                k=0;
                j++;
                check=true;
            }
        }
    }
    cout << check;
    
    return 0;
}