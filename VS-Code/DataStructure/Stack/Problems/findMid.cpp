#include <iostream>
#include <stack>
using namespace std;
void deleteMid(stack<int>&st, int count, int size) {
    
    // Base Case:
    if (count == size/2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();

    // Recrusive call:
    deleteMid(st, count + 1, size);
    // Again put the elements:
    st.push(num);
    

}
    
int main() {
    
    stack <int> st;
    st.push(3);
    st.push(7);
    st.push(6);
    st.push(0);
    st.push(4);
    st.push(7);
    st.push(6);
    int count =0;
    int size = st.size();
    deleteMid(st,count, size);
   while(!st.empty()) {
    cout << st.top();
    st.pop();
   }

    
    return 0;
}