#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b;cin>>n>>a>>b;
    a*=a;b*=b;
    a=abs(a-n);
    b=abs(b-n);
    (a<b) ? cout<<"1\n" : cout<<"2\n";
}
