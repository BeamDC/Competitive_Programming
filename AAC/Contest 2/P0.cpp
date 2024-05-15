#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize "Ofast"
/********************************************************* @robhoma was here */
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    
    int n;
    cin >> n;
    vector<int>cs(26);
    int e=0,o=0;
    for(int i=0;i<n;++i){
        char c;
        cin >> c;
        cs[c-'a']+=1;
    }
    for(int i=0;i<26;++i){
        if(cs[i]&1)++o;
        else if (!(cs[i]&1)&&cs[i]!=0)++e;
    }
    o=max(1,o);
    cout << o;
    return 0;
}
/*****************************************************************************/
