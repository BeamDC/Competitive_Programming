#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int d,y;cin>>d>>y;
    while(d>y){
        d+=y;
        cin>>y;
    }cout<<d;
}
