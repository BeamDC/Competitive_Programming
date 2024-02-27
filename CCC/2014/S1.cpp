#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, m;
    vector<int> f;
    
    cin >> k >> m;
    
    for (int i = 0; i < k; i++){
        f.push_back(i+1);
    }
    for (int i = 0; i < m; i++){
        int t;
        cin >> t;
        vector<int> remaining;
        for(int j = 0; j<f.size(); j++){
            if((j+1)%t != 0){
                remaining.push_back(f[j]);
            }
        }
        f = remaining;
    }
    
    for (int i = 0; i < f.size(); i++){
        cout << f[i] << '\n';
    }
}
