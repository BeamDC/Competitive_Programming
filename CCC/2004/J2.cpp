#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>
#define vi vector<int>
#define si stack<int>
#define mii map<int, int>
#define all(x) x.begin(), x.end()
#define print1D(vec) cout<<#vec<<":\n";for(auto x:vec){cout<<x<<" ";}cout<<nl;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int x,y;cin>>x>>y;
    cout<<"All positions change in year "<<x<<nl;
    for(int i=1;i<y+1-x;++i){
        if(i%2!=0)continue;
        if(i%3!=0)continue;
        if(i%4!=0)continue;
        if(i%5!=0)continue;
        cout<<"All positions change in year "<<i+x<<nl;
    }
}
