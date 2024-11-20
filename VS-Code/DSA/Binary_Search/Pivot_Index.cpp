#include <iostream>
using namespace std;

int findPivotIndex(int arr[], int n)
{

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

    int PivotIndex=findPivotIndex(arr,n);
    cout<<"The Pivot index of the array : "<<PivotIndex;    
    return 0;
}