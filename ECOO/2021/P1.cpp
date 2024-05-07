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

int _,_n;
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)
/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);

    int a,b,c,i,m;
    _i(a);_i(i);_i(m);
    b=a;c=a;
    a+=i;
    b+=2*i;
    c+=3*i;
    if(a >= m)cout << a;
    else if (b >= m)cout << b;
    else if (c >= m)cout << c;
    else cout << "Who knows...";
    return 0;
}
/*****************************************************************************/
