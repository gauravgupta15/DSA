// Check if String is rotated by 2 or not:
// given two strings to check whether string is rotated by 2


#include <iostream>
using namespace std;
    
int main() {
    string st1 = "amazon";
    string st2 = "azonam";
    int i=0; int j=2;
    while(j<st2.length()) {
        if(st1[i] != st2[j]) cout << "string is not rotated";
        i++;
        j++;
    } cout <<"string is rotated";

    
    return 0;
}