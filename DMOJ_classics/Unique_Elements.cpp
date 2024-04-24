#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    unordered_set<int> s;
    int n,t;cin >> n;
    
    for(int i=0;i<n;++i){
        cin >> t;
        s.insert(t);
    }cout << s.size();
}
