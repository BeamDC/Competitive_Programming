//basic
#include <bits/stdc++.h>
using namespace std;
//optimizations
#pragma GCC optimize "Ofast"
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
#pragma GCC target("avx2")
//macros
#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//fast I/O
//the INPUT_SIZE should be as close to the max number of bits as possible
//since all input digits are chars, calculate the max number of chars
//then multiply the value by 8 since a char is one byte of memory
//the result is the max amount of memory needed to solve
//approximate using bit shift to get 
//the optimal amount of memory to allocate to the buffer
#define INPUT_SIZE (32<<20)
int _i0=0;
char _i[INPUT_SIZE];
char _;
//48 is the ascii value for zero ('0'), this converts chars to ints
#define fin(x) do{for(x=_i[_i0++]-48;47<(_=_i[_i0++]);x=x*10+_-48);}while(0)
#define fin_char(c) c=_i[_i0++]
#define fin_word(s) do{while(true){_=_i[_i0++];if(32<_){s.push_back(_);}else{break;}}}while(0)
#define fin_string(s) do{while(true){_=_i[_i0++];if(10<_){s.push_back(_);}else{break;}}}while(0)
#define finset(p) freopen(p,"r",stdin);fread(_i,1,INPUT_SIZE,stdin)
/*****************************************************************************/
int main() {
    IOS;
    return 0;
}
/*****************************************************************************/
