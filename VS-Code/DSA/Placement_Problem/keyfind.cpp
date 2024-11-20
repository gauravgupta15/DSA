#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int findKey(int num) {
    vector<int> v;
    while(num>0) {
        int rem = num % 10;
        v.push_back(rem);
        num/=10;
    }
    sort(v.begin(),v.end());
    int n=0;
    for (int i = 0; i < v.size(); i++)
    {
        int rem = v[i];
        n=n*10+rem;
    }
    return n;
}   
int main() {
    int num;
    cin>> num;
    int key = findKey(num);
    cout << key;
    return 0;
}