// find that how many times the array is rotated in sorted array using binary search algorithm
#include <iostream>
using namespace std;

int binSearch(int *arr, int n) {
    int s=0, e=n-1;
    while(s<=e) {
        int mid = s+(e-s)/2;
        if(arr[mid]  >= arr[s] && arr[mid] >= arr[mid+1]) {
            if(mid+1 == n) {
                return 0;
            }
            return mid+1;
        } else if(arr[mid] < arr[mid+1] && arr[mid] >= arr[s]) {
            s=mid+1;
        } else if(arr[mid] < arr[s]) {
            e=mid-1;
        }
    }
    return 0;
}

int main()
{
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    int search = binSearch(arr,n);
    cout << "index on rotated: " << search<<endl;
    

    return 0;
}
