//basic
#include <bits/stdc++.h>
using namespace std;
//optimizations
#pragma GCC optimize "Ofast"
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
//macros
#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define umap unordered_map
#define uset unordered_set
//fast I/O
#define INPUT_SIZE 32<<20 //33.5m
int _c0=0;
char _c[INPUT_SIZE];
char _;
#define fin_string(s) do{while(true){_=_c[_c0++];if(10<_){s.push_back(_);}else{break;}}}while(0)
#define fin_int(x) do{for(x=_c[_c0++]-48;47<(_=_c[_c0++]);x=x*10+_-48);}while(0)
#define finset(p) freopen(p,"r",stdin);fread(_c,1,INPUT_SIZE,stdin)
#define finset_nf fread(_c,1,INPUT_SIZE,stdin)

/********************************************************* @robhoma was here */
int main() {
    IOS;
    finset_nf;
    int loop=10;
    while(loop--){
        int f,d,t=0,sum;
        fin_int(f);
        fin_int(d);

        int sales[d][f];
        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < f; ++j) {
                fin_int(sales[i][j]);
            }
        }

        for (int i = 0; i < d; ++i) {
            sum=0;
            for (int j = 0; j < f; ++j) {
                sum+=sales[i][j];
            }
            if(!(sum%13))t+=sum/13;
        }

        for (int i = 0; i < f; ++i) {
            sum=0;
            for (int j = 0; j < d; ++j) {
                sum+=sales[j][i];
            }
            if(!(sum%13))t+=sum/13;
        }
        cout<<t<<'\n';
    }
    return 0;
}
/*****************************************************************************/
