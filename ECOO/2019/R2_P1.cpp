#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,O3")
#pragma GCC target("avx2")
using namespace std;

#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define check_file(x) if (x.is_open()){cout<<"FILE OPENED\n";}else{cout<<"FILE NOT OPENED\n";}
//void f_int(int &x){string line;getline(read,line);istringstream iss(line);iss>>x;}

/*****************************************************************************/
int main() {
    IOS
    int n;
    int loop = 10;
    while(--loop + 1){
        cin >> n;
        unordered_set<string>emails;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            s.erase(remove(s.begin(), s.begin() + s.find('@'), '.'),s.begin() + s.find('@'));
            if(s.find('+') != string::npos)s.erase(s.begin() + s.find('+'), s.begin() + s.find('@'));
            transform(all(s),s.begin(), ::tolower);
            emails.insert(s);
        }cout<<emails.size()<<'\n';
    }
}
/*****************************************************************************/
