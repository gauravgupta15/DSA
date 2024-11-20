#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


vector <int> reArrange(int arr[], int n) {
    vector<int> ans(n,0);
    vector<int> pos;
    vector<int> neg;
    
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    int i=0,j=0;
    int index=0;
    while(i<pos.size() && j<neg.size()) {
       if(index%2==0) {
        ans[index]=pos[i];
        i++;
        index++;
       }
       else {
        ans[index] = neg[j];
            j++;
            index++;
        }
    }
    
    while(i<pos.size()) {
        ans[index] = pos[i];
        i++;
        index++;
    }
    while(j<neg.size()) {
        ans[index] = neg[j];
        j++;
        index++;
    }

    
    return ans;
}
    
int main() {
    int n = 6;
    int arr[n] = {1,2,-4,-5,3,6};

    vector<int>ans = reArrange(arr,n);
    for(int it : ans) {
        cout << it << " ";
    }

    
    return 0;
}