/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void RemoveEle(int *arr, int pos, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i]==arr[pos]) {
            arr[pos]=arr[pos+1];
            pos++;
        }
    }
}

void anotherRmvEle(int *arr, int pos, int n) {
    int i=n;
    while(i>=pos) {
        i--;
    }
}

int main()
{
    int n = 6;
   int ar[n] = {1,2,4,5,7};
   int pos = 3;
   int i=0;
   int ele=23;

for(int i=n; i>pos; i--) {
    ar[i] = ar[i-1];
}
ar[pos]=ele;

// while(i<pos) {
//     ar[n]=ar[n-1];
//     i++;
// }
// ar[pos]=ele;

// RemoveEle(ar,pos,n);

for(int i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
    return 0;
}
