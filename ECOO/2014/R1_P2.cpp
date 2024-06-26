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
#define lb lower_bound  // First element NOT LESS than val
#define ub upper_bound  // First element GREATER than val
#define PI acos(-1)

#define printarr(a) cout << #a << ":\n";for(auto x : a)cout << x << ' ';cout << '\n'

int _,_n;
#define _i(x) do{_n=getchar();if(_n-45)x=_n;else x=getchar();for(x-=48;47<(_=getchar());x=x*10+_-48);if(_n<46)x=-x;}while(0)

//sort a vector and rempove duplicates
template<class T> void remDup(vector<T>& v) {
    sort(all(v)); v.erase(unique(all(v)),end(v));};

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

umap<string,char> m = {
    {"00100000",' '},{"01000001",'A'},
    {"01000010",'B'},{"01000011",'C'},
    {"01000100",'D'},{"01000101",'E'},
    {"01000110",'F'},{"01000111",'G'},
    {"01001000",'H'},{"01001001",'I'},
    {"01001010",'J'},{"01001011",'K'},
    {"01001100",'L'},{"01001101",'M'},
    {"01001110",'N'},{"01001111",'O'},
    {"01010000",'P'},{"01010001",'Q'},
    {"01010010",'R'},{"01010011",'S'},
    {"01010100",'T'},{"01010101",'U'},
    {"01010110",'V'},{"01010111",'W'},
    {"01011000",'X'},{"01011001",'Y'},
    {"01011010",'Z'}
    };

/********************************************************* @robhoma was here */
bool _sort(string s1,string s2){
    return s1.length() > s2.length();
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    freopen("Input.txt","r", stdin);
    int loop=10;
    while(loop--){
        string a,x,y;
        cin >> a >> a;
        //generate both possible binary strings
        for(char c : a){
            if(c=='A' || c=='T')x+='0';
            else if(c=='C' || c=='G')x+='1';
        }
        for(char c : a){
            if(c=='A' || c=='T')y+='1';
            else if(c=='C' || c=='G')y+='0';
        }
        // cout << "x: " << x << '\n';
        // cout << "y: " << y << '\n';

        int p=0,l=x.length();
        vector<string> v1(l);
        for(int i=0;i<l;++i){
            string s;
            for(int j=p;j<l;j+=8){
                s=x.substr(j,8);
                if(m.count(s))v1[i]+=m[s];
                else break;
            }
            ++p;
        }
        p=0;
        for(int i=0;i<l;++i){
            string s;
            for(int j=p;j<l;j+=8){
                s=y.substr(j,8);
                if(m.count(s))v1[i]+=m[s];
                else break;
            }
            ++p;
        }
        sort(all(v1),_sort);
        // cout << v1 << '\n';
        cout << v1[0];
        cout << '\n';
    }
    return 0;
}
/*****************************************************************************/
