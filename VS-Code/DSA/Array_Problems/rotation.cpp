#include <iostream>
using namespace std;
    
int main() {
    
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

int r;
cin>>r;
    int i=0, j=n-r+1;

    while(i<r && j<n)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j++;
        
    }

    cout<<"The Rotated array is : ";
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    
    return 0;
}