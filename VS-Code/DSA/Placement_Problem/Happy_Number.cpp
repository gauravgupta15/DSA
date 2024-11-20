#include <bits/stdc++.h>
using namespace std;
    
void addNum(vector<int>&v, int n) {
    int i=0;
    while(n > 0) {
        int rem = n%10;
        v[i] = rem;
        i++;
        n=n/10;
    }
}

bool HappyNumber(int num) {
    int n = 0;
    vector<int> v(10);
    vector<int> check(0);
    addNum(v,num);

    while(n != 1) {
        for(int i=0; i<v.size(); i++) {
            n+=pow(v[i],2);
        }
        for(int i=0; i<check.size(); i++) {
            if(check[i] == n) {
                return 0;
            }
        check.push_back(n);
        }
        if(n != 1) {
            addNum(v,n);
            n=0;   
        }
    }
    return 1;

}
int main() {
    
    int num = 3;
    cout <<HappyNumber(num);
    
    return 0;
}