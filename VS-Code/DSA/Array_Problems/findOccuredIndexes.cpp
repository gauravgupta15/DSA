#include <iostream>
using namespace std;

void getIndexes(int arr[], int n, int tar) {
    int count=0;
    int index=100;
    for(int i=0;i<n; i++) {
        if(arr[i]==tar) {
            if(index > i) {
                count++;
                index = i;
            }
       
        }
    }
    int end = n-(count+index)-1;
    cout << "The first index : " <<index<<endl<<" from the end side: " << end;
}
    
int main() {
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int tar;
    cout << "enter the target: ";
    cin>>tar;

    getIndexes(arr,n,tar);
    
    
    return 0;
}