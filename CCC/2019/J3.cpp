#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;cin>>n;
    string s;
    char c;
    for(int i=0;i<n;++i){
        t=0;
        cin>>s;
        c=s[0];
        for(auto x : s){
            if(x==c)++t;
            else{
                cout<<t<<' '<<c<<' ';
                c=x;
                t=1;
            }
        }
        cout<<t<<' '<<c<<' ';
        cout<<'\n';
    }
}
