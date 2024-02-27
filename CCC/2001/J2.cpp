#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast
    int x,m;cin>>x>>m;
    for (int i = 0; i < m; ++i) {
        if((x*i)%m==1){
            cout<<i;
            return 0;
        }
    }cout<<"No such integer exists.";
}
