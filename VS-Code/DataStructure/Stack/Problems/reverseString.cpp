#include <bits/stdc++.h>
#include <stack>
using namespace std;
string reverseString(string &st) {
    stack <char> s;
    for(int i=0; i<st.length(); i++) {
        char ch = st[i];
        s.push(ch);
    }
    string ans ="";
    while(!s.empty()) {
        ans+=s.top();
        s.pop();
    }
    return ans;
}
    
int main() {
    string st;
    cout << "Enter your string : ";
    cin >> st;
    cout << reverseString(st);
    
    return 0;
}