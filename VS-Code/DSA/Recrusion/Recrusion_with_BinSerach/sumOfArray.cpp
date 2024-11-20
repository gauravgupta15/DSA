#include <iostream>
using namespace std;

int sumOfArray(int *arr, int n)
{
    
    // Base Case:
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return arr[0];
    }

    // Smaller Parts:
    int remainingPart = sumOfArray(arr + 1, n-1);
    int sum = arr[0] + remainingPart;
    // Recursive Relation: 
    return sum;
}
    
int main() {
    
    int arr[100];
    int n;
    cout<<"Enter your array size: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        /* code */

        cin>>arr[i];
    }

    int sum = sumOfArray(arr, n);
    cout<<"Sum of Given array is : "<<sum;
    
    
    return 0;
}