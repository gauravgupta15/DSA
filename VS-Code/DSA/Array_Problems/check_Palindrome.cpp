#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
    
void reverseArr(int num)
{
    string str = to_string(num);
    reverse(str.begin(), str.end());

    // cout << "reverse string "<<str;
    int revNum = stoi(str);

    if (revNum == num)
        cout<<num << " "; 
}


int main() {
    
    int arr[100];
    int n;
    cout  << "Enter the size : ";
    cin >> n;

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int  i = 0; i < n; i++)
    {
       reverseArr(arr[i]);
    }
    
    
    return 0;
}