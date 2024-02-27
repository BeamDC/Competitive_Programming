#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;getline(cin,s1);getline(cin,s2);
    int c1,c2;
    set<char> c(s1.begin(), s1.end());
    bool isAnagram = true;
    //cout<<s1<<", "<<s2<<'\n';
    for(auto x : c){
        if(x==' ')continue;
        c1=count(s1.begin(), s1.end(), x);c2=count(s2.begin(), s2.end(), x);
        if(c1 != c2)isAnagram = false;
    }
    if(isAnagram)printf("%s","Is an anagram.");
    else printf("%s","Is not an anagram.");
}
