#include <iostream>
using namespace std;

string RemoveSpace(string str) {
    string st="";
    
    
    for(int i=0; i<str.length(); i++) {
        int j = i+1;
        if(str[i] == ' ') {
            while(j < str.length()) {
                str[i]=str[j];

                if(str[i]==' ') {
                    str[i]=str[j];
                    j++;
                }
                i++;
            }            
        }
    }
    return str;
}
    
int main() {
    string str;
    getline(cin,str);
// my name is khan: -> 
    string RemovedSpaces = RemoveSpace(str);
    cout << RemovedSpaces;
    return 0;
}