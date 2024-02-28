#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define um unordered_map
#define all(x) x.begin(), x.end()
#define print1D(vec) cout<<#vec<<":\n";for(auto x:vec){cout<<x<<" ";}cout<<nl;

/*****************************************************************************/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,p,t=0;cin>>n;
    p=n/2;
    int h[n];
    for (auto& x : h)cin>>x;
    for (int i = 0; i < p; ++i) {
        if(h[i]==h[i+p])++t;
    }cout<<t*2;
}
/*****************************************************************************/
