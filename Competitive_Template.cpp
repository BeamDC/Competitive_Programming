#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize "Ofast, unroll-loops"
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
#define lb lower_bound  // First element NOT LESS than val
#define ub upper_bound  // First element GREATER than val
#define PI acos(-1)

#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' ';cout << '\n'

int _,_n;
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)

//sort a vector and rempove duplicates
template<class T> void remDup(vector<T>& v) {
    sort(all(v)); v.erase(unique(all(v)),end(v));};


/********************************************************* @robhoma was here */
int main() {
    auto start = chrono::high_resolution_clock::now();

    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("input.txt","r", stdin);

    vector<int> v(1e4);
    for (int i = 0; i < 1e4; ++i) {
        _i(v[i]);
    }

    auto end = chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = (end - start)*1000000;
    printarr(v);
    cout << "\ncompleted in: " << elapsed.count() << " microseconds\n";
    return 0;
}
/*****************************************************************************/
