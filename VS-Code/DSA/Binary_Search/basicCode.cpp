#include <iostream>
using namespace std;

int binSearch(int arr[], int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start/2);

    int key;
    cout<<"Enter your key: ";
    cin>>key;

    while(start<end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        mid=start+(end-start/2);
        
    }
}
    
int main() {
    
    int n;
    cout<<"Enter the size: ";
    cin>>n;
 
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Key is on the index : "<<binSearch(arr,n);
    

    
    return 0;
}