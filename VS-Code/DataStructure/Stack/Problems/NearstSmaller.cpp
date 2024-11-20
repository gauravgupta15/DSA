#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector <int> NearSmall(int a[], int n) {
    vector <int> arr;
    stack<int> st;
    for(int i=0; i<n; i++) {
        if(st.size() == 0) {
            arr.push_back(-1);
        }

        else if(st.size() > 0 && st.top() < a[i]) {
            arr.push_back(st.top());
        }
        else if(st.size() > 0 && st.top() >= a[i]){
                while (st.size()>0 && st.top() >= a[i])
                {
                    st.pop();
                }
                if(st.size()==0) {
                    arr.push_back(-1);
                }
                else {
                    arr.push_back(st.top());
                }
                 
        }
        st.push(a[i]);
    }
    return arr;

}
int main() {
    
    int n=5;
    int arr[n] = {4,5,2,10,8};
    vector<int> result = NearSmall(arr, n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}