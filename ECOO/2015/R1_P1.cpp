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
int _;
#define umap unordered_map

#define _u(x) do{for(x=getchar()-48;47<(_=getchar());x=x*10+_-48);}while(0)
#define _s(x) do{string t="";for(;;){_=getchar();if(_<11)break;t.push_back(_);}s=t;}while(0)

/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    for (int i = 0; i < 10; ++i) {
        int t=0;
        umap<string, double> box = {};
        string s;
        while(1){
            _s(s);
            if(s=="end of box")break;
            ++box[s];
        }
        t=(box["red"] * 16 + ceil(box["orange"]/7) * 13 + 
          ceil(box["yellow"]/7) * 13 + ceil(box["green"]/7) * 13 + 
          ceil(box["blue"]/7) * 13 + ceil(box["violet"]/7) * 13 + 
          ceil(box["pink"]/7) * 13 + ceil(box["brown"]/7) * 13);
        cout << t << '\n';
    }
    return 0;
}
/*****************************************************************************/
