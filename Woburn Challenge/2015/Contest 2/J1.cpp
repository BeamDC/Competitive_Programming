#include <bits/stdc++.h>
using namespace std;
#define um unordered_map

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    
    int n;cin>>n;
    um<int, string> far{{1,"A long time ago in a galaxy far away..."},{2,"A long time ago in a galaxy far, far away..."},{3,"A long time ago in a galaxy far, far, far away..."},{4,"A long time ago in a galaxy far, far, far, far away..."},{5,"A long time ago in a galaxy far, far, far, far, far away..."}};
    cout<<far[n];
}
