#include <iostream>
using namespace std;
    
    void sayDigit(int n, string arr[])
    {

        
        if(n > 0)
        {
            int digit = n % 10;
            
            //  Recrusive Relation :
            n = n/10;
            sayDigit(n, arr);

            cout << arr[digit]<<" ";
        }
        // Base Case: (n <= 0)
        else{
            return;
        }

    }
int main() {
    
    int n;
    cout<< " Enter Your Number: ";
    cin>>n;

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigit(n,arr);
    
    return 0;
}