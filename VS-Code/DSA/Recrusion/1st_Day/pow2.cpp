#include <iostream>
using namespace std;

int twoPow(int n)
{
    // int ans=1;
    // for(int i=0; i<n;i++)  Normal way :
    // {
    //     ans=ans*2;
    // }
    //     return ans;

    if(n==0)
    {
        return 1;
    }
    int ans=twoPow(n-1);
    int biggerProblem=2*ans;

    return biggerProblem;
}
    
int main() {
    int n;
    cin>>n;
    cout<<twoPow(n);
    
    return 0;
}