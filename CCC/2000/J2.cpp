#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int m,n,c=0;cin >> m >> n;

    for(int i=m; i <= n; ++i){
        string s = to_string(i);
        string ss = s;
        if(ss.find('2') != string::npos)continue;
        else if(ss.find('3') != string::npos)continue;
        else if(ss.find('4') != string::npos)continue;
        else if(ss.find('5') != string::npos)continue;
        else if(ss.find('7') != string::npos)continue;
        for(int j=0; j<s.size(); ++j){
            if(ss[j] == '6')ss[j] = '9';
            else if(ss[j] == '9')ss[j] = '6'; 
        }
        reverse(ss.begin(), ss.end());
        if(ss == s){
            c++;
            //cout << s << " -> " << ss << '\n';
        }
    }cout << c;
    
    return 0;
}
