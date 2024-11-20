// cahnge the problem input 4 char and change it ascii values:

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class AsciiChanger{
    int n;

    public:
    AsciiChanger(int n1, char a[]) {
            n=n1;
        
            for(int i=0; i<n; i++) {
                cin>>a[i];
            }
    }
    void asciiValue(char a[]) {
        for (int i = 0; i <n; i++)
        {
            if(a[i] >= 65 && a[i] <= 91){
                int num = 'A'+(a[i]-'A');
            cout << "ascii value for "<< a[i] << " is : "<<num<<endl;
        }
            if(a[i] >= 96 && a[i] <= 122){
                int num = 'a'+(a[i]-'a');
                cout << "ascii value for "<<a[i] << " is : " << num <<endl; 
        }
       
        }
    }
};
    
int main() {
    int n;
    cout << "enter your size: ";
    cin>>n;

    if(n==4){
        char a[100];
        AsciiChanger obj(n,a);
        obj.asciiValue(a);    
    } else {
        cout << "invalid input";
    }
    
    return 0;
}