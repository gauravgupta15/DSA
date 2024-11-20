#include <iostream>
#include <map>
using namespace std;
    
int main() {
    string st = "the quick brown fox jumps over the lazy dog";
    map <char , int> mpp;
    for(int i=0; i<st.length(); i++) {
        if(isalpha(st[i])) {
            mpp[st[i]]++;
        }
    }

    int count=0;
   for(auto it : mpp) {
    cout << it.first<<endl;
        if('a' <=it.first&& it.first <='z')  {
            count++;
        }
    }
    if(count==26) cout<<"panagram";
    else cout<<"not pangaram";

    
    return 0;
}