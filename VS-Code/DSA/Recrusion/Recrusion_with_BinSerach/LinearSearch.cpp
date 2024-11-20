#include <iostream>
using namespace std;

isPresent(int arr[], int n, int num)
{
    // Base Case: 
    if(n == 0)
    {
        return false;
    }

    // Smaller Parts:
    if(arr[0] == num) {
        return true;
    }
    else{
        // Recrusive Relation :
        bool Present = isPresent(arr+1, n-1, num);
        return Present;
        
    }
}
    
int main() {
    
    int arr[100];
    int n;
    cout<<"Enter your array size: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {

        cin>>arr[i];
    }

    int num;
    cout<<"Enter Your Number: ";
    cin>>num;

    bool Present = isPresent(arr, n, num);
    if(Present)
    {
        cout <<"The Element Found";
    } else {
        cout << " The Element Not Found";
    }
    
    
    return 0;
}