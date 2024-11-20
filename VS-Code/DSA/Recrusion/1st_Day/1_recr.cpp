#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int smallerProblem=fact(n-1);
    int biggerProblem = smallerProblem*n;

    return biggerProblem;

}
    
int main() {
    
    int n;
    cin>>n;

    cout<<fact(n);
    return 0;
}