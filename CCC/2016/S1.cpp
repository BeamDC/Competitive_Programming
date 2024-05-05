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

/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    static int a1[26],a2[27],c;
    while(1){
        c = getchar();
        if(c<11)break;
        ++a1[c-97];
    }
    while(1){
        c = getchar();
        if(c<11)break;
        else if(c==42)++a2[26];
        ++a2[c-97];
    }
    for (int i = 0; i < 26; ++i) {
        if(a1[i]<a2[i] && !(a2[26])){putchar('N');return 0;}
        else if(a1[i]>a2[i])a2[26]-= a1[i] - a2[i];
    }
    if(a2[26]){putchar('N');return 0;}
    putchar('A');
    return 0;
}
/*****************************************************************************/
