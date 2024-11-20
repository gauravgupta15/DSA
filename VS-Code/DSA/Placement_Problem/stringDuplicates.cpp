#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

vector<string> dict(string s) {
    vector<string> str;

    vector<string> res;

    string word = "";
    for(int i=0; i<s.length(); i++) {

        if(s[i] != ' ' && s[i] == '\0') {
            word += s[i];
        } else {
            str.push_back(word);
            word="";
        }
    }

    if(!word.empty()) {
        str.push_back(word);
    }



    for(int i=0; i<str.size(); i++) {
        for(int k=i+1; k<str.size(); k++) {
            if(str[i] == str[k]) {
                res.push_back(str[i]);
                break;
            }
        }
    }
    return res;
}
    
int main() {
    
    string s;
    getline(cin,s);
    vector <string> res = dict(s);
    for (int i = 0; i < res.size(); i++)
    {
       cout << res[i] <<" ";
    }
    
    
    return 0;
}