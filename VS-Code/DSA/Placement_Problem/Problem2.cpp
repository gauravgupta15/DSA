#include <iostream>
using namespace std;

class ValidCar {
    int num;
    public:

   ValidCar(int n) {
        num=n;
    }

    void getNumber() {
            int cnt=0;
            int rem;
            int sum = 0;
            int n = num;
            while(n > 0) {
                rem = n%10;
                if(n>=0) {
                    cnt++;
                }

                sum+=rem;
                n=n/10;
                
            }
            if(cnt==4) {
                if(sum%3==0 || sum%5==0 || sum%7==0 ) {
                    cout <<"Valid Car Number";
                } else {
                    cout << "Invalid Car Number";
                }

            } else {
                cout << "the number is not 4 digits";
            }
        } 
    };

    
int main() {
    int num;
    cout << "Enter the number: ";
    cin>>num;
if(num > 0) {
    ValidCar obj(num);
    obj.getNumber();
} else {
    cout << "negative or zero";
}
    
    return 0;
}