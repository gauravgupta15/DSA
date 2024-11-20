#include <iostream>
using namespace std;
    

    void merge2Array(int arr1[], int n, int arr2[], int m, int NewArray[])
    {

        int i =0, j=0, index =0;

        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                NewArray[index++] = arr1[i++];
            } else {
                NewArray[index++] = arr2[j++];
            }
        }

        // Left part :
        while (i < n)
        {
            NewArray[index++] = arr1[i++];
        }

        // Right part :
        while (j < m)
        {
            NewArray[index++] = arr2[j++];
        }
        
        
        
    }
int main() {
    
    int n, m;
    cout << "lenght of both array: "<<endl;
    cin>>n>>m;

    int arr1[n];
    int arr2[m];
    
    for (int i = 0; i < n; i++)
    {
       cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
       cin>>arr2[i];
    }

    int len = n + m;
    int NewArray[len];
    merge2Array(arr1, n, arr2, m, NewArray);

// Printing the merged arrraY:
    for(int i=0; i<len; i++)
    {
        cout << NewArray[i] << " ";

    }

    

    
    return 0;
}