#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,x,y,t1=0,t2=0;cin>>n>>a>>b;
    for(int i=0;i<n;++i){
        cin>>x>>y;
        if(x<a)t1+=1;
        else t1+=2;
        if(y<b)t2+=1;
        else t2+=2;
    }
    if(t1<t2)cout<<"Andrew wins!";
    else if (t1>t2)cout<<"Tommy wins!";
    else cout<<"Tie!";
    cout<<'\n';
    return 0;
}
