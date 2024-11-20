#include <iostream>
using namespace std;
    void countPrint(int n)
    {
        // Base Case:

        if(n==0)
        {
            return;
        }
        cout<<n<<endl;

    //   Recrusive Relation: 
        countPrint(n-1);
    }

int main() {
    int n;
    cin>>n;
    countPrint(n);


    
    return 0;
}