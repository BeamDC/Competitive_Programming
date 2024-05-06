//basic
#include <bits/stdc++.h>
using namespace std;
//optimizations
#pragma GCC optimize "Ofast, unroll-loops"

#ifndef _WIN32
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#else
#define getchar _getchar_nolock
#define putchar _putchar_nolock
#endif

int _,_n;
#define all(x) x.begin(), x.end()
#define umap unordered_map
#define uset unordered_set
#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' ';cout << '\n'
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)

/********************************************************* @robhoma was here */
int main() {
    auto start = chrono::high_resolution_clock::now();

    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("input.txt","r", stdin);

    auto end = chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = (end - start)*1000000;
    cout << "\ncompleted in: " << elapsed.count() << " microseconds\n";
    return 0;
}
/*****************************************************************************/
