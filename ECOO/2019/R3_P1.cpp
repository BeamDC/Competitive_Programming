#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,O3")
#pragma GCC target("avx2")
using namespace std;

#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define check_file(x) if (x.is_open()){cout<<"FILE OPENED\n";}else{cout<<"FILE NOT OPENED\n";}
//void f_int(int &x){string line;getline(read,line);istringstream iss(line);iss>>x;}

/*****************************************************************************/
int main() {
    IOS
    int n,t;
    const int m=1e6+1;
    int loop = 10;
    while(--loop + 1){
        cin >> n;
        bitset<m>chords;
        for (int i = 0; i <= m; ++i) {
            chords[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            chords[x] = 1;
        }
        t=0;
        for (int i = 1; i <= m; ++i) {
            if (chords[i]){
                for (int j = i+i; j <= m; j+=i) {
                    if(chords[j])++t;
                }
            }
        }cout << t << '\n';

    }
}
/*****************************************************************************/
