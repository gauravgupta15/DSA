#include <iostream>
using namespace std;

int findPeak(int arr[], int n, int s, int e)
{

    // Base Case:
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e-s)/2;
    // Smaller Parts:
    if(arr[mid - 1] < arr[mid] > arr[mid + 1])
    {
        return mid;
    }
    if(arr[mid] < arr[mid + 1])
    {
       return findPeak(arr, n, mid+1, e);
    }
    else if(arr[mid] > arr[mid+1]) {
        // e += mid - 1;
        return findPeak(arr, n, s, mid-1);
    }
     
}
    
int main() {
    
    int arr[100];
    int n;
    cout<<"Enter your array size: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {

        cin>>arr[i];
    }
    int s = 0;
    int e = n-1;

    int PeakElement = findPeak(arr, n, s, e);

    cout << "The Peak Element of the array is : "<<PeakElement;
    
    
    return 0;
}