#include <iostream>
using namespace std;
    // We are counting total no of occurance also : 

int firstPosition(int arr[], int n, int key)
{
    int start = 0, end=n-1;
    int mid=start+(end-start/2);
    int ans =-1;

    while(start<=end)
    {
        if(key == arr[mid])
        {
            ans=mid;
            end=mid-1;
            
        }
        else if(key < arr[mid])
        {
            end=mid-1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }

        mid=start+(end-start/2);


    }
    return ans;
}

int LastPosition(int arr[], int n, int key)
{
    int start = 0, end=n-1;
    int ans =-1;
    int mid=start+(end-start/2);

    while(start<end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start = mid+1;
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
        return ans;
}
int main() {
    
    // arr --> 1,2,3,3,3,5,6
    // The first occurance at index --> 2
    // The last occurance at index --> 4

    int n;
    cout<<"Enter the size: ";
    cin>>n;
 
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter your Element : ";
    cin>>key;

    int firstOccu=firstPosition(arr,n,key);
    int lastOccu=LastPosition(arr, n, key);
    cout<<"First Position : "<<firstOccu<<endl;
    cout<<"Last Position : "<<lastOccu<<endl;

    // For counting the no of occurance we just do :
    cout<<key<<" in the array is occurcured times: "<<(lastOccu-firstOccu)+1;

    return 0;
}