// Reverse queue using recursion: 

#include <iostream>
#include<queue>
using namespace std;



void reverseQ(queue<int>&q) {
    if(q.size() == 0){
        return;
    }
        

    int num = q.front();
    q.pop();

    reverseQ(q);
    q.push(num);
}
    
int main() {
    queue<int> q;
    q.push(3);
    q.push(7);
    q.push(11);
    q.push(8);
    q.push(9);

    reverseQ(q);
    while(!q.empty()) {
        cout << q.front()<<endl;
        q.pop();
    }
    
    return 0;
}