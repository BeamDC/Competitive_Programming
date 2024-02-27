#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,n,a,b,t=0;cin>>q>>n;
    vector<int> d(n),p(n);
    
    for(auto& x : d)cin>>x;
    for(auto& x : p)cin>>x;
    
    sort(d.begin(),d.end());
    sort(p.begin(),p.end());
    
    if(q==2){
        a=0;b=n-1;
        while(a!=n){
            t+=max(d[a],p[b]);
            ++a;--b;
        }   
    }else{
        for(int i=0;i<n;++i)t+=max(d[i],p[i]);
    }
    cout<<t;
}
