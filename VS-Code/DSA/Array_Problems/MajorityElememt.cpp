#include <iostream>
using namespace std;

int MajorityEle(int arr[], int n) {
    int ele=arr[0];
    int freq = 1;

    for(int i=1; i<n; i++) {
        if(freq == 0) {
            ele = arr[i];
            freq=1;
        }
        else if(ele == arr[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    int count =0;
    for(int i=0; i<n; i++) {
        if(ele == arr[i]){
            count++;
        }
    }

    if(count > n/2) {
        return ele;
    }
}
    
int main() {
    
    int arr[100];
    int n;
    cout << "Enter your size: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int MajorityElement=MajorityEle(arr,n);
    cout << "The majority element of the array is : "<<MajorityElement;
    
    
    return 0;
}