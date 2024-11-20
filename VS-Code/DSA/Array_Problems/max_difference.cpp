#include <iostream>
using namespace std;

int MaxDiffence(int arr[], int n) {
    int Diff_Max=0;
    int Suffix = arr[n-1];

    for(int i=n-1; i>=0; i--) {

        int diff = Suffix - arr[i];
        if(diff > Diff_Max) {
            Diff_Max = diff;
        }
        if(Suffix < arr[i]) {
            Suffix=arr[i];
        }
    }
    return Diff_Max;
}
    
int main() {
    
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maXDifference = MaxDiffence(arr,n);
    cout << "the max difference between two elment is : " <<maXDifference;
    
    
    return 0;
}