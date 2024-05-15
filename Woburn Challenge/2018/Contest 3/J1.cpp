#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    fast
    int p,d,b,t;cin>>p>>b>>d;
    t=p%b;
    p-=t;
    t+=(p/b)*d;
    cout<<t;
}
