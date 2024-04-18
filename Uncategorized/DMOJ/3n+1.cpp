#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n=7,t=0;cin >> n;
    while (n != 1){ // can also use (!(n & 1))
        if(n%2)n= 3*n + 1; 
        else n/=2; // can also use n >>= 1;
        ++t;
    }
    cout << t;
    
    return 0;
}
