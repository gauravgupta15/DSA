#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // Base Case: 
    if(n == 0 || n == 1)
    {
        return true;
    }
    
    // Break Question in Smaller parts:
    if(arr[0] > arr[1])
    {
        return false;
    }
    else{
        // Recrusive Relation : 
        bool remainingPart = isSorted(arr+1, n-1);

        return remainingPart;
    }
}
    
int main() {
    
    int arr[100];
    int n;
    cout<< " Enter the size of array: ";
    cin>> n;

    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);
    if(ans)
    {
        cout<< " Array is sorted";
    }
    else{
        cout << "Array is not Sorted ";
    }
    
    return 0;
}