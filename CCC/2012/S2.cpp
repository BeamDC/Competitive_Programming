#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    unordered_map<char, int> roman = {
        {'I',1},{'V',5},{'X',10},{'L',50},
        {'C',100},{'D',500},{'M',1000}
    };

    string s;
    cin >> s;
    int total = 0;
    vector<pair<int,int>> aromatic;
    for(int i=0; i<s.size()-1; i+=2){
        pair<int,int> t = {
            s[i] - '0',
            roman[s[i+1]]
        };
        aromatic.emplace_back(t);
    }
    for(int i=0; i<aromatic.size()-1; ++i){
        if(aromatic[i].second < aromatic[i+1].second){
            total -= aromatic[i].first * aromatic[i].second;
        }else{
            total += aromatic[i].first * aromatic[i].second;
        }
    }cout << total + aromatic[aromatic.size()-1].first * aromatic[aromatic.size()-1].second;
    
    return 0;
}
