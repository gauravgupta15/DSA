// make array beautiful '
#include <iostream>
#include <stack>
using namespace std;
    
int main() {
    stack <int> s;
    int arr[8] = {2,3,4,-4,-2,-8,9,1};
    for (int i = 0; i < 8; i++)
    {
       if(s.empty()) {
        s.push(arr[i]);
       } else if(arr[i] >= 0) {
            if(s.top() >= 0) {
                s.push(arr[i]);
            } else {
                s.pop();
            }
       } else if(arr[i] < 0) {
            if(s.top() < 0) {
                s.push(arr[i]);
            } else {
                s.pop();
            }
       }
    }

    while(!s.empty()) {
        cout <<s.top()<<endl;
        s.pop();
    }
    
    
    return 0;
}