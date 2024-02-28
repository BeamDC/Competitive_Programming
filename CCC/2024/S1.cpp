#include <bits/stdc++.h>
using namespace std;

int h[1000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,t=0;cin>>n;
    for (int i=0; i<n;++i)cin>>h[i];
    for (int i = 0; i < n/2; ++i) {
        if(h[i]==h[i+n/2])++t;
    }cout<<t*2;
}
