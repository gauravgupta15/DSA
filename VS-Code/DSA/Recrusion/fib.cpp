#include <iostream>
using namespace std;

int fib(int n)
{
    // Base Case : 

    if(n==0 || n==1)
    {
        return n;
    }

    // Recrusive Relation :

    int ans = fib(n-1) + fib(n-2);

    return ans;


}
    
int main() {
    
    int n; 
    int i=0;

    cout<<"Enter your Number : ";
    cin>>n;


    cout<<" Fibonnacci Series : "<<endl;

    while(i < n)
    {
        cout << fib(i)<<" ";
        i++;
    }
    
    return 0;
}   