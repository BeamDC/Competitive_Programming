#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize "Ofast"
#ifndef _WIN32
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#else
#define getchar _getchar_nolock
#define putchar _putchar_nolock
#endif

#define all(x) x.begin(), x.end()
#define umap unordered_map
#define uset unordered_set

#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("Input.txt","r", stdin);
    
    return 0;
}
/*****************************************************************************/
