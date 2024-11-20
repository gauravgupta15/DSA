#include <iostream>
using namespace std;
    
    int missingNum(int arr[], int n)
    {
        int expectedSum = (n*(n+1))/2;
        int actualSum = 0;
        cout << "Expected Sum : "<<expectedSum<<endl;
        for(int i=0; i<n; i++)
        {
            actualSum+=arr[i];
        }
        cout << "Actual sum : "<<actualSum<<endl;
        return expectedSum - actualSum;
    }
int main() {
    
    int n=11;
    int arr[n] = {4,6,7,9,2,1,8,11,10,3};
    // 4 6 7 9 2 1 8 11 10 3 
    
    cout<<"missing number:"<<missingNum(arr, n);
    
    return 0;
}