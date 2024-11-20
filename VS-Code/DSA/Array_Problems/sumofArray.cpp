

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[3] = {1, 2, 3};
    int arr2[2] = {6, 9};
    int num1 =0, num2 =0;

    for(int i=0; i<3; i++)
    {
        num1 *= 10;
        num1+= arr[i];
    }
    
    for(int i=0; i<2; i++)
    {
        num2 *= 10;
        num2 += arr2[i];
    }
    

    int sum = num1+num2;

    string str = to_string(sum);


    vector<int> temp;

   istringstream  iss(str);
    int value;

    while(iss >> value)
    {
        temp.push_back(value);
    }

    for(int i=0;i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}
