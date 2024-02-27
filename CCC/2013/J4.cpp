#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,c,m=0;
    cin >> t >> c;
    vector<int> times(c);

    for (int i = 0; i < c; ++i) {
        cin >> times[i];
    }
    sort(times.begin(), times.end());
    
    for (int i = 0; i < c; ++i) {
        if(times[i] <= t){
            ++m;
            t-=times[i];
        }else{
            break;
        }
    }
    cout << m << '\n';
}
