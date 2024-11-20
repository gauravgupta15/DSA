#include <bits/stdc++.h>
using namespace std;
bool PalindromeMaker(string st) {
    map<char,int>count_char;
    // char ch;
    for(int i=0; i<st.length(); i++) {
        // ch=st[i];
        count_char[st[i]]++;
    }
    int odd_count=0;
    for(auto element : count_char) {
        if(element.second % 2 != 0) {
            odd_count++;
        }
    }
    if(odd_count>1) {
        return false;
    }
    return true;
}
    
int main() {
    string st;
    cin>>st;
    if(PalindromeMaker(st)) {
        cout << "string can be created as palindrome";
    } else {
        cout << "(X) string can not be created as palindrom";
    }
    return 0;
}