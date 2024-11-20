#include <iostream>
#include <stack>
using namespace std;
   bool  findMinimumCost(string str) {
        stack <char> st;
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];

            if(ch == '{') {
                st.push(ch);
            }
            else {
                // if the closing paranthesis: 
                bool isValid = true;
                while (!st.empty())
                {
                    if(st.top() == '{') {
                        st.pop();
                    } else {
                    // agar wo } hua to in case not similler
                        return false;
                    }
                }
                return true;
                
            }
        }
    }
int main() {
    
    string st;
    cout << "Enter your string : ";
    cin >> st;
    if(findMinimumCost(st)) {
        cout << "Valid";
    } else {
        cout << "not valid";
    }
    
    
    return 0;
}