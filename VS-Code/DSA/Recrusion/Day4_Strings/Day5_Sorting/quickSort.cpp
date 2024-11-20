#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt =0;

    for (int  i = s+1; i <=e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }
// Place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete h:
    int i=s, j=e;

    while (i<pivotIndex && j > pivotIndex)
    {
        while (arr[i] < arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if(i<pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j++]);
        }
        
    }
    return pivotIndex;
    
    
}
  void quickSort(int arr[], int s, int e)
  {
    // Base Case:
    if(s >= e)
        return;

    // Partition karenge:
    int p = partition(arr, s, e);

    // left part sort karo:
    quickSort(arr, s, p-1);
    
    // Right part sort karo:
    quickSort(arr, p+1, e);

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
    
    quickSort(arr,0,n-1);
    cout << "After Sorted : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}