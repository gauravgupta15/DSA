#include <iostream>
using namespace std;
    
int main() {
    int n;
    cout <<"Enter your number : ";
    cin>>n;

    if(n==4){
        int a[100];
        for(int i=0; i<n; i++) {
           cin>>a[i];
        }

        for(int i=0; i<n; i++) {
            char c = a[i];
            cout << "ascii : "<<c<<endl;
        }
    }
    
    return 0;
}