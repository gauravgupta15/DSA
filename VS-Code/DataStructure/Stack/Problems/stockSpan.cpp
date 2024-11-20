#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> Stock(int a[], int n) {
    stack <int> st;
    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        int count=1;
       if(st.size() == 0) {
        v.push_back(count);
       }

       else if(st.size() > 0 && st.top() > a[i]) {
        v.push_back(count);
       }

       else if(st.size() > 0 && st.top() < a[i]) {
            while(st.size() >0 && st.top() < a[i]) {
                count++;
                st.pop();
            }
       }
    }
    
}
    
int main() {
    int n=7;
    int arr[n]={100,80,60,70,60,75,85};

    vector<int> result = Stock(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    
    return 0;
}