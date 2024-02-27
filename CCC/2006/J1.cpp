#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>
#define si stack<int>
#define mii map<int, int>
#define all(x) x.begin(), x.end()
#define print1D(vec) cout<<#vec<<":\n";for(auto x:vec){cout<<x<<" ";}cout<<nl;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int a,c=0;
    mii b;
    b[1]=461;
    b[2]=431;
    b[3]=420;
    b[4]=0;
    cin>>a;
    c+=b[a];
    
    b[1]=100;
    b[2]=57;
    b[3]=70;
    b[4]=0;
    cin>>a;
    c+=b[a];
    
    b[1]=130;
    b[2]=160;
    b[3]=118;
    b[4]=0;
    cin>>a;
    c+=b[a];
    
    b[1]=167;
    b[2]=266;
    b[3]=75;
    b[4]=0;
    cin>>a;
    c+=b[a];
    
    printf("%s %d.","Your total Calorie count is",c);
}
