#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e-s)/2;

    int len1 = mid -s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex= s;
    // Copy values:
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    int k = mid;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array:
    int index1 =0;
    int index2 = 0;
    mainArrayIndex =s;

    while (index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len2)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }  

}


void MergeSort(int *arr, int s, int e)
{
    // Base Case:
    if (s > e)
    {
        return;
    }

    int mid = s + (e-s)/2;
    // Left Part Sort:
    MergeSort(arr, s, mid);

    // Right Part sort:
    MergeSort(arr, mid+1, e);

    // Merge:
    merge(arr, s, e);
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
    
    MergeSort(arr,0, n-1);
    cout << "After Sorted : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
    return 0;
}