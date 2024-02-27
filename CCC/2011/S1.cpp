#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,t;cin>>n;
    string str="",txt;
    
    for(int i=0;i<n;++i){
        getline(cin,txt);str+=txt;
    }
    getline(cin,txt);str+=txt;
    
    s = count(str.begin(), str.end(), 's');
    t = count(str.begin(), str.end(), 't');
    s += count(str.begin(), str.end(), 'S');
    t += count(str.begin(), str.end(), 'T');
    
    if(s==t)cout<<"French";
    else if(s>t)cout<<"French";
    else if(t>s)cout<<"English";
}
