#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,swTot=0,seTot=0,d=0;cin >> n;
    vector<int> sw(n),se(n);
    
    for(int i=0;i<n;++i){
        cin >> sw[i];
    }
    
        for(int i=0;i<n;++i){
        cin >> se[i];
    }
    
    for(int i=0;i<n;++i){
        swTot += sw[i];
        seTot += se[i];
        if(swTot == seTot){
            d=i+1;
        }
    }
    cout << d;
}
