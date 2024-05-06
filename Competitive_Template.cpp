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

#define IN_SZ 24
char *_c = new char[IN_SZ];
int _c0=0;
int _,_n,_0,_00;

//macros
#define all(x) x.begin(), x.end()
#define umap unordered_map
#define uset unordered_set
#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' ';cout << '\n'
#define _u(x) do{while((x=getchar())<'0');for(x-='0';'0'<=(_=getchar());x=10+_-'0');}while(0)
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)
#define _s(x) do{string t="";for(;;){_=getchar();if(_<11)break;t.push_back(_);}s=t;}while(0)

//uses memcpy() to copy the subarray containing a string into a string variable
#define _memstring(s) do { \
    _0 = (++_c0); \
    while (true) { \
        _00 = (++_c0); \
        if (_00 >= ' ') break; \
    } \
    memcpy(s, &_c[_0], (_00 - _0)); \
} while (0)

//above macro sucks and is bad. fix tomorrow


/********************************************************* @robhoma was here */
int main() {
    auto start = chrono::high_resolution_clock::now();

    /*#################################################*/
    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("F:\\Programming\\Ethan\\CPlusPlus\\Competitive Programming\\input.txt","r", stdin);
    fread(_c,1,IN_SZ,stdin);
    // Example arrays
    int srcArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int startIndex = 2; // Start index of the subarray in the source array
    int endIndex = 300;   // End index of the subarray in the source array
    int subArraySize = endIndex - startIndex + 1;
    int destArray[subArraySize]; // Allocate space for the destination array

    // Copy the subarray using memcpy
    memcpy(destArray, &srcArray[startIndex], subArraySize * sizeof(int)); //somehow make this work for strings

    /*#################################################*/

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = end - start;
//    for(auto x : v)printf("%d ",x);
    printarr(destArray);
    cout << '\n' << elapsed.count() << '\n';
    return 0;
}
/*****************************************************************************/
