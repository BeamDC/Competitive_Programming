#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast
    string s="";
    vector<string> d;
    cin>>s;
    while(s!="SCHOOL"){
        d.emplace_back(s);
        cin>>s;
    }
    for (int i = d.size()-1; i > 0; i-=2) {
        if (d[i]=="R")cout<<"Turn LEFT onto ";
        else if (d[i]=="L")cout<<"Turn RIGHT onto ";

        cout<<d[i-1]<<" street."<<nl;
    }
    if (d[0]=="R")cout<<"Turn LEFT into your HOME.";
    else if (d[0]=="L")cout<<"Turn RIGHT into your HOME.";
}
