#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    unordered_map<string, string> TXT;
    TXT["CU"] = "see you";
    TXT[":-)"] = "I'm happy";
    TXT[":-("] = "I'm unhappy";
    TXT[";-)"] = "wink";
    TXT[":-P"] = "stick out my tongue";
    TXT["(~.~)"] = "sleepy";
    TXT["TA"] = "totally awesome";
    TXT["CCC"] = "Canadian Computing Competition";
    TXT["CUZ"] = "because";
    TXT["TY"] = "thank-you";
    TXT["YW"] = "you're welcome";
    TXT["TTYL"] = "talk to you later";
    
    string s;
    while(1){
        cin>>s;
        if(TXT.count(s)==1)cout<<TXT[s];
        else cout<<s;
        cout<<'\n';
        if(s=="TTYL")return 0;
    }
}
