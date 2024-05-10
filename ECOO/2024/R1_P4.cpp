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

#define vi vector<int>

/********************************************************* @robhoma was here */
string ab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vi primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
void solve(){
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i){
        int a = ab.find(s[i]);
        // cout << a << ' ';
        int shift = primes[i];
        a-=shift;
        a%=26;
        if(a<0)a=26+a;
        s[i]=ab[a];
        // cout << a << ' ';
    }cout << s << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("Input.txt","r", stdin);
    for(int i=0;i<10;++i){
        solve();
    }
    return 0;
}
/*****************************************************************************/
