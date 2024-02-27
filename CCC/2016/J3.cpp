#include <bits/stdc++.h>
using namespace std;

bool isPal(string s){
    string r = s;
    reverse(s.begin(),s.end());
    return s == r;
}
bool _sort(string s1,string s2){
    return s1.length() > s2.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;cin>>s;
    vector<string> pSubstrings;

    for (int i = 0; i < s.length(); ++i) {
        for (int j = 1; j <= s.length()-i; ++j) {
            if(isPal(s.substr(i,j)))pSubstrings.push_back(s.substr(i,j));
        }
    }
    sort(pSubstrings.begin(),pSubstrings.end(),_sort);
    cout<<pSubstrings[0].length();
}
