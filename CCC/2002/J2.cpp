#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    string s,v="aeiouyAEIOUY";
    while(true){
        cin>>s;
        if(s=="quit!")break;
        if(s.length()<4){cout<<s<<nl;continue;}
        int i=s.size()-3;
        if(find(all(v),s[i])!=v.end()){cout<<s<<nl;continue;}
        if(s[i+1]!='o' && s[i+2]!='r'){cout<<s<<nl;continue;}
        cout<<s.substr(0,i+1)<<"our"<<nl;
    }
}
