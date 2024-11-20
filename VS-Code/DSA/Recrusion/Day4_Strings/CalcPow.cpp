#include <iostream>
using namespace std;


int power(int num, int p)
{
    // Base Case :
    if (p == 0)
        return 1;
    
    if ( p == 1)
        return num;

    // Recursive Call:
    int ans = power(num, p/2);

    // Progressive Step:
        // if power is even : 
    if(p%2 == 0)
        return ans * ans;
        // Power is Odd:
    else
        return num * ans * ans;
    
}  
int main() {
    
    int num;
    cout << "Enter YOur Number: ";
    cin>>num;

    int p;
    cout << "Enter YOur Power: ";
    cin>> p;

    int ans = power( num,  p);
    cout << "The Calculation Power : "<<ans;
    
    return 0;
}