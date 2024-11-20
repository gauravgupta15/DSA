

#include <iostream>

using namespace std;
int squrt(int x) {
    
    int s =0,e=x+1;
    while(s<e) {
        int mid = s+e-s/2;
        if(mid*mid ==x){
            return mid;
        }
        else if(mid*mid > x) {
            e=mid-1;
        }
        else if(mid*mid < x){
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int x = 100;
    cout <<squrt(x);
    

    return 0;
}
