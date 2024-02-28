#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int m,n,t=0;cin>>m>>n;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(i+j==10)++t;
        }
    }
    if(t==1){
        cout<<"There is 1 way to get the sum 10.";
    }else{
        cout<<"There are "<<t<<" ways to get the sum 10.";
    }
}
