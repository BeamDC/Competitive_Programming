#include <bits/stdc++.h>
using namespace std;

int main() {
    string kWord,oWord,word,a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int c;
    getline(cin,kWord);getline(cin,oWord);
    for(auto x : oWord){
        if(find(a.begin(),a.end(),x)==a.end())continue;
        else word+=x;
    }
    for(int i=0;i<word.length();++i)kWord+=kWord[i];
    for(int i=0;i<word.length();++i){
        c=((word[i]-'A')+(kWord[i]-'A'))%26%26;
        word[i]=a[c];
    }cout<<word;
}
