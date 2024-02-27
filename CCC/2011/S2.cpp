#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a=0;cin>>n;vector<char> c(n),t(n);
    for(int i=0;i<n;++i)cin>>c[i];
    for(int i=0;i<n;++i)cin>>t[i];
    for(int i=0;i<n;++i)a+=(c[i]==t[i])?1:0;
    cout<<a;
}
