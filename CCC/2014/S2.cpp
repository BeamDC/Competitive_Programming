#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")
#define um(x,y) unordered_map<x,y> 
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;cin>>n;
    string s;
    um(string,string) partners;
    vector<string> v(n),w(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=0;i<n;++i){
        cin>>w[i];
    }
    for(int i=0;i<n;++i){
        partners[v[i]] = w[i];
    }
    for(int i=0;i<n;++i){
        if(partners[v[i]]==v[i]){
            cout<<"bad\n";
            return 0;
        }if(partners[partners[v[i]]]!=v[i]){
            cout<<"bad\n";
            return 0;
        }
    }cout<<"good\n";
    return 0;
}
