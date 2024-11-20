#include <bits/stdc++.h>
using namespace std;
void reverseString(string &st, int i, int j)
{
    
    // Base Case 
    if(i > j)
        return;

    swap(st[i], st[j]);
    i++;
    j--;
    
    // Recrusive Call:
    reverseString(st, i, j);
}
    
int main() {
    
    string st;
    cout << "Enter YOur Name : ";
    cin>>st;

    int i =0, j = st.length()-1;

    reverseString(st, i, j);

    cout << st;
    return 0;
}