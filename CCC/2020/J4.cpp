#include <bits/stdc++.h>

using namespace std;
int main() {

    string t,s;
    bool f = false;
    cin >> t >> s;

    for (int i = 0; i < s.length(); ++i) {
        if(t.find(s) != string::npos){
            f = true;
            break;
        }else{
            s = s.substr(1, s.length()-1) + s[0];
        }
    }

    if(f){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}
