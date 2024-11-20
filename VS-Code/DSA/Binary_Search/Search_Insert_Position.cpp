#include <iostream>
using namespace std;

int SearchInsert(int arr[], int n, int key) {
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        int mid= s+(e-s)/2;
        if(key==arr[mid])
            return mid;
        else if(key > arr[mid]) 
            s=mid+1;
        else if(key < arr[mid])
            e=mid-1;
    }
    return s;
    
}
    
int main() {
    
    int n; 
    cout << "Enter your size: ";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int key;
    cout <<"enter your element: ";
    cin>>key;

    int index = SearchInsert(arr,n,key);
    cout << "intex to be insertex is : "<<index;
    
    
    return 0;
}