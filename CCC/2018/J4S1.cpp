#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;cin >> n;
    vector<int> v(n);
    vector<double> d(n-1);
    
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    for(int i=0;i<n-2;++i){
        d[i] = abs((v[i]+((v[i+1] - v[i])*0.5)) - (v[i+1]+((v[i+2] - v[i+1])*0.5)));
    }
    
    sort(d.begin(), d.end());

    printf("%.1f", d[1]);
}
