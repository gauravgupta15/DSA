#include <iostream>
#include<stack>
#include <vector>
using namespace std;
    
vector<int>findNextGreater(vector<int> v) {
        stack<int> s;
        vector<int> a;

        for(int i=v.size()-1; i>=0; i--) {
            cout << "i : "<< i << endl;
            if(s.empty()) {
                a.push_back(-1);
                s.push(v[i]);
            } else {
                if(v[i] < s.top()) {
                    a.push_back(s.top());
                    s.push(v[i]);
                } else {
                    s.pop();
                }
            }
        }
        return a;
}
int main() {
    
    vector <int> v = {1,3,2,4}; 
    cout << v.size();
    vector<int> ans=findNextGreater(v);
    for(int i : ans) {
        cout << i<<" ";
    }
    return 0;
}