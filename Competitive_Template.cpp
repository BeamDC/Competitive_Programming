//basic
#include <bits/stdc++.h>
using namespace std;
//optimizations
#pragma GCC optimize "Ofast"
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#ifndef _WIN32
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#else
#define getchar _getchar_nolock
#define putchar _putchar_nolock
#endif

#define IN_SZ (32<<20)
char _c[IN_SZ];
int _c0=0;
int _,_n;

//macros
#define all(x) x.begin(), x.end()
#define umap unordered_map
#define uset unordered_set
#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x;cout << '\n'
#define _u(x) do{while((x=getchar())<'0');for(x-='0';'0'<=(_=getchar());x=10+_-'0');}while(0)
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)

//read a string from input buffer
//omits leading and trailing whitespace
void _memstr(string &s) {
    int _0=_c0;
    while(32<_c[++_c0]);
    int strsz = _c0 - _0;
    ++_c0;
    char t[strsz];
    memcpy(t,_c+_0,strsz);
    s=t;
}

/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("Input.txt","r", stdin);
    fread(_c,1,IN_SZ,stdin);
    return 0;
}
/*****************************************************************************/
