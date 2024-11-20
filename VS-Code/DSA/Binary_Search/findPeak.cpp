#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    int s=0;
    int e =n;
    int mid= s+(e-s)/2;

    while (s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
    
}
    
int main() {
    
    int arr[100];
    int n;
    cout<<"Enter your size:  ";
    cin>>n;

    cout<<"Enter array Elements : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int PeakElement=findPeak(arr,n);
    cout<<"The Peak Element of Your Array Mountain: "<<PeakElement;
    
    return 0;
}