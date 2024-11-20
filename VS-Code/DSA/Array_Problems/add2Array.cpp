#include <bits/stdc++.h> 
using namespace std;

vector<int> findArraySum(int a[], int n, int b[], int m) {
	// Write your code here.
	vector<int> temp;
    
    int i = n-1;
    int j = m-1;
    int sum = 0;
    int check = 0;
    while(i >= 0 && j>=0) {
        sum=a[i] + b[j] + check;
        check=0;
        if(sum > 9) {
            sum=sum%10;
            check=1;
        }
        temp.push_back(sum);
        i--;
        j--;
    }
    if(i==j && check == 1) {
        temp.push_back(check);
    }
    while(i>=0) {
        cout<<sum<<endl;

        cout << "the value of each : "<<a[i]<<endl;
        sum=a[i] + check;
        check=0;
        temp.push_back(sum);
        i--;
    }
    while(j>=0) {
        sum= b[j] + check;
        check=0;
        temp.push_back(sum);
        j--;
    }
    reverse(temp.begin(), temp.end());
    
   return temp;
}
    
int main() {
    int n1=3;
    int n2 = 3;
    int a1[n1] = {9,9,9};
    int a2[n2] = {9,9,9};
    vector<int>sum = findArraySum(a1,n1,a2,n2);
    for(auto it : sum) {
        cout << it<<" ";
    }
    
    return 0;
}