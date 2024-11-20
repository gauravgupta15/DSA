#include <iostream>
#include<stack>
using namespace std;
    
int main() {
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);

    s.pop();
    cout << s.top()<<endl;
    cout << s.empty()<<endl;
    cout<<s.size()<<endl;
  
    cout<<s.top();
    
    
    return 0;
}