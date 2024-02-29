#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,s,t=0;cin>>n>>s;
    string p;cin>>p;
    for(int i=0;i<n;++i){
        if(p[i]=='U')--s;
        else if(p[i]=='D')++s;
        if(s<0)s=0;
        if(s==0)t++;
    }cout<<t<<'\n';
}
