#include <iostream>
#include<algorithm>
using namespace std;
    
int main() {
    

    int arr[100];
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ele;
    cout << "enter elemeent : ";
    cin>>ele;

    sort(arr, arr + n);
    int i=0, j=n-1;
    int sum = 0;
    bool flag = false;

    while(i<j)
    {
        int k=i+1;
        while (k<j)
        {
            k=i+1;
            sum = arr[i] + arr[j] + arr[k];
            if(sum == ele) {
                flag = true;
                break;
            } else if(sum > ele) {
                j--;
            } else if(sum < ele) {
                i++;
            } 
            break;
        }
        
    }
    if(flag) {
        cout << "found";
    } else {
        cout << "Not Found";
    }
   
    
    
    return 0;
}