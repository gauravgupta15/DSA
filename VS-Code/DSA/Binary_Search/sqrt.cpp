#include <iostream>
using namespace std;
    
    int sqrtbin(int n)
    {
        int e=n,s=0;
        int ans= -1;
        int mid = s+(e-s)/2;

        while(s<=e)
        {
            if(mid*mid ==n)
            {
                return mid;
            }
            if(mid * mid > n)
            {
                e=mid-1;
            } 
            else{
                ans = mid;
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

    double morePrecision(int n, int precision, int TempSolu)
    {
        double factor=1;
        double ans = TempSolu;
        for(int i=0; i<precision; i++)
        {
            factor/=10;
            for(double j=ans; j*j<n; j=j+factor)
            {
                ans = j;
            }

        }
        return ans;
    }
int main() {
    
    int n;
    cout<<"Enter YOur Number: ";
    cin>>n;

    int TempSolu = sqrtbin(n);
    cout<<"The Squre Root of the Number is : "<<morePrecision(n,3,TempSolu);
    
    return 0;
}