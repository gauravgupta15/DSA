#include <iostream>
using namespace std;
    
    void moveZero(int arr[], int n)
    {
        int i=0;
        for (int  j = 0; j < n; j++)
        {
            if(arr[j] != 0) {
                swap(arr[j], arr[i]);
                i++;
            }
        }
        
    }
int main() {
     int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    moveZero(arr, n);

    for(int i=0; i<n;i++)
    {
        cout<<arr[i] << " ";
    }


    
    
    return 0;
}