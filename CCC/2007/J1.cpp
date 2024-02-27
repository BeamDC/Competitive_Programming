#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    vi v(3);
    cin>>v[0];
    cin>>v[1];
    cin>>v[2];
    
    sort(all(v));
    cout<<v[1];
}
