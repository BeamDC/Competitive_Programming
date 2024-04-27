#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,O3")
#pragma GCC target("avx2")
using namespace std;
#define all(x) x.begin(), x.end()

/*****************************************************************************/
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,d,total,laundry=0;
    for (int i = 0; i < 10; ++i) {
        cin >> n >> m >> d;
        total = n;
        vector<int> events;
        for (int j = 0; j < m; ++j) {
            int a;cin>>a;
            events.emplace_back(a);
        }
        for (int j = 1; j <= d; ++j) {
            int c = count(all(events), j);
            if(n==0){n = total; ++laundry;}
            if(!c)--n;
            else if (c) {
                total += c;
                n += c;
                --n;
            }
        }
        cout << laundry << '\n';
        laundry = 0;
    }
}
/*****************************************************************************/
