#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops,O3")
#pragma GCC target("avx2")
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int total = 1691600,n,o;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>o;
        if(o==1)total-=100;
        else if(o==2)total-=500;
        else if(o==3)total-=1000;
        else if(o==4)total-=5000;
        else if(o==5)total-=10000;
        else if(o==6)total-=25000;
        else if(o==7)total-=50000;
        else if(o==8)total-=100000;
        else if(o==9)total-=500000;
        else if(o==10)total-=1000000;
    }cin>>o;
    total/=10-n;
    if(o>total){
        cout<<"deal";
    }else{
        cout<<"no deal";
    }
    return 0;
}
