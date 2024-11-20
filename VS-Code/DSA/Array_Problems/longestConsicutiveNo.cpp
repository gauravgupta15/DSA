#include <bits/stdc++.h>
using namespace std;
    // Problem : given array find the largest consicutive no : 
    // for example arr{102,4,100,1,101,3,2,1,1} -> here 1,2,3,4 are longest consucutive so answer is 4
int main() {
    int n = 14;
    int arr[n] = {1,2,1,2,2,1,3,4,3,100,100,102,101,101};
    sort(arr, arr + n); // Sort the array

    int sum = 1;
    int longest = 0;
    int i = 0;
    
    while(int j = i+1 <n) {
        
       cout << arr[j]<<endl;
        if(arr[i] == arr[j]) {
            i++;
        } else if(arr[i] == arr[j]+1) {
            
            sum++;
            i++;
        } else {
            sum=1;
            i++;
        }
        if(longest < sum) {
            cout << longest;
            longest = sum;
        }
    }
    cout << longest;
    
    
    return 0;
}