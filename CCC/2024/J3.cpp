#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unordered_map<int,int> scores;
    int n;cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    sort(all(s));
    for(int i=0;i<n;++i){
        scores[s[i]]+=1;
    }
    auto it = unique (all(s));
    s.resize(distance(s.begin(),it));
    cout<<s[s.size()-3]<<' '<<scores[s[s.size()-3]];
}
