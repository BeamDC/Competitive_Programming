#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;cin >> n;
    for(int i=1; i<n+1; ++i){
        cout << n << " X " << i << " = " << n*i << '\n';
    }
    
    return 0;
}
