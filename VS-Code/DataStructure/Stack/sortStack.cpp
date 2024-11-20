#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>&s, int temp) {
    // Base case:
    if(s.empty() || s.top() <= temp) {
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();

    // induction step
    insert(s,temp);
    s.push(val);
} 
void sort(stack<int>&s) {
    // Base case 
    if(s.size() == 1) {
        return;
    }

    // hypothesis:
    int temp = s.top();
    s.pop();

    // Induction STep:
    sort(s);
    insert(s,temp);
}
    
int main() {
    
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);

    sort(s);
    while(!s.empty()) {
        cout <<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}