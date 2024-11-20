#include <iostream>
using namespace std;

bool isPresent(int arr[], int n, int s, int e, int key)
{

    // Base Case:
    if (s > e)
    {
        return false;
    }

    int mid = s + (e-s)/2;
    // Smaller Parts:
    if(arr[mid] == key)
    {
        return true;
    }
    else if(arr[mid] < key)
    {
       return isPresent(arr, n, mid+1, e, key);
    }
    else {
        // e += mid - 1;
        return isPresent(arr, n, s, mid-1, key);
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

    int key;
    cout<<"Enter Your Key: ";
    cin>>key;

    int s=0;
    int e = n-1;
    bool Present = isPresent(arr, n,s,e, key);
    if(Present)
    {
        cout <<"The Element Found";
    } else {
        cout << " The Element Not Found";
    }
    
    
    return 0;
}