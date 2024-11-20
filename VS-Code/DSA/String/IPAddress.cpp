#include <iostream>
using namespace std;
    
int main() {
    string st = "";

    string ip = "1.1.1.1";
    for(int i=0; i<ip.length(); i++) {
        if(ip[i] == '.') {
            st+="[.]";
        } else {

        st+=ip[i];
        }
    }
    cout << st;
    
    return 0;
}