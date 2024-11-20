#include <iostream>
#include <stack>
using namespace std;
    
int main() {
    string str[7] = {"ab","ac", "da","da","ac","db","ea"};
    stack<string> s;
    for(int i=0; i<7; i++) {
        if(s.empty()) {
            s.push(str[i]);
        }
        else if(str[i] == s.top()) {
            s.pop();
        } else {
            s.push(str[i]);
        }
     }
     int len =0;
     while(!s.empty()) {
        cout << s.top();
        len++;
        s.pop();
     }
     cout << "\n "<<len<<endl;
    
    return 0;
}