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

    string d;cin >>d;
    auto single = [](int i, string d){return ( (d[i]=='A'&&d[i+1]=='A') || (d[i]!='A'&&d[i+1]!='A') );};
    for(int i=0;i<d.size()-1;++i){
        if(single(i,d)){d.insert(i+1," ");++i;}
    }
    
    cout << d;
    return 0;
}
/*****************************************************************************/
