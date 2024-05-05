#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize "Ofast"
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define umap unordered_map
#define uset unordered_set
#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' '
#define INPUT_SIZE 32<<18
int _c0 = 0;
char _c[INPUT_SIZE];
char _;
#define fin_string(s,e) string t="";do{while(true){_=_c[_c0++];if(t==e)break;if(10<_){t.push_back(_);}else{break;}}s=t;}while(0)
#define fin_word(s) do{while(true){_=_c[_c0++];if(32<_){s.push_back(_);}else{break;}}}while(0)
#define fin_int(x) do{for(x=_c[_c0++]-48;47<(_=_c[_c0++]);x=x*10+_-48);}while(0)
#define finset(p) freopen(p,"r",stdin);fread(_c,1,INPUT_SIZE,stdin)
#define finset_nf fread(_c,1,INPUT_SIZE,stdin)

/********************************************************* @robhoma was here */
int main() {
    IOS;
    finset_nf;
    int n, total = 0, served = 0;
    fin_int(n);
    string ts = "";
    fin_string(ts,"EOF");
    while (ts != "EOF") {
        if(n==1000)n=1;
        if (ts == "TAKE") {
            ++n;
            ++total;
        }
        else if (ts == "SERVE")++served;
        else { cout << total << ' ' << total - served << ' ' << n << '\n'; total=0;served=0;}
        fin_string(ts,"EOF");
    }
    return 0;
}
/*****************************************************************************/
