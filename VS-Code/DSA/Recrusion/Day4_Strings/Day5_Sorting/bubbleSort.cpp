#include <iostream>
using namespace std; 

void BubbleSort(int arr[], int n)
{
    // Base Case:
    if (n==0 || n == 1)
    {
        return;
    }

    // 1 case solve karlo - Largest element ko end me rakh dena: 
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    
    BubbleSort(arr, n-1);
    
}
    
int main() {
    
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    BubbleSort(arr,n);
    cout << "After Sorted : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
    
    return 0;
}