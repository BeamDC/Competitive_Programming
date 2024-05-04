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
#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' '
//fast I/O
#define INPUT_SIZE 32<<20
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
    finset("input.txt");
    return 0;
}
/*****************************************************************************/
