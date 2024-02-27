#include <bits/stdc++.h>
using namespace std;

struct compressedChar{
    char letter;
    string binary;
};

int main() {
    int n,t;cin>>n;
    string s,decoded="";
    vector<compressedChar> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i].letter>>v[i].binary;
    }
    cin>>s;
    for(int i=0;i<v.size();++i){
        int pos = s.find(v[i].binary);
        if(pos==0){
            decoded+=v[i].letter;
            for(int j=0;j<v[i].binary.length();++j)s.erase(s.begin());
            i=-1;
        }
    }
    cout<<decoded;
}
