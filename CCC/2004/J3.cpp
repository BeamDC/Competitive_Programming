#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n,m;cin>>n>>m;
    vs adj(n),noun(m);
    for(auto& x : adj){
        cin>>x;
    }
    for(auto& x : noun){
        cin>>x;
    }
    
    for(auto x : adj){
        for(auto y : noun){
            cout<<x<<" as "<<y<<nl;
        }
    }
}
