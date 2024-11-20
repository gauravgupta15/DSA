#include <iostream>
using namespace std;

void subArray(int arr[], int n) {
    for(int i=0; i<n; i++)  {
        for(int j=i; j<n; j++) {
             
        }
    }
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
    subArray(arr,n);
    return 0;
}