#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx2")
using namespace std;
#define all(x) x.begin(), x.end()

/*****************************************************************************/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,l;cin>>n>>l;
    bool tf;
    string s,b;
    for (int i = 0; i < n; ++i) {
        cin>>s;
        b="";
        tf=true;
        for (int j = 0; j < l; ++j) {
            if(count(all(s),s[j])==1){
                b.push_back('0');
            }
            else {
                b.push_back('1');
            }
            if(b[j-1]==b[j]) {
                tf = false;
                break;
            }
        }
        (tf) ? cout<<"T\n" : cout<<"F\n" ;
    }
}
/*****************************************************************************/
