#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,ss="",v="aeiou";
    cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        ss+=s[i];
        if(find(v.begin(),v.end(),s[i])==v.end()){
            if(s[i] <= 99)ss+='a';
            else if(s[i] <= 103)ss+='e';
            else if(s[i] <= 108)ss+='i';
            else if(s[i] <= 114)ss+='o';
            else if(s[i] <= 122)ss+='u';
            
            if(s[i]=='z')ss+='z';
            else if(find(v.begin(),v.end(),s[i]+1)==v.end()){
                ss+=s[i]+1;
            }else{
                ss+=s[i]+2;
            }
        }
    }cout<<ss;
}
