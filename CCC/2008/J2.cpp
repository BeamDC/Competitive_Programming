#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>
#define vi vector<int>
#define si stack<int>
#define dq deque
#define mii map<int, int>
#define all(x) x.begin(), x.end()
#define print1D(vec) cout<<#vec<<":\n";for(auto x:vec){cout<<x<<" ";}cout<<nl;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    dq<char> t = {'A','B','C','D','E'};
    int o,n;cin>>o;
    while(o!=4){
        cin>>n;
        switch (o){
            case 1:
                for(int i=0;i<n;++i){
                    t.push_back(t.front());
                    t.pop_front();
                }
                break;
            case 2:
                for(int i=0;i<n;++i){
                    t.push_front(t.back());
                    t.pop_back(); 
                }
                break;
            case 3:
                for(int i=0;i<n;++i){
                    t[0] ^= t[1];
                    t[1] ^= t[0];
                    t[0] ^= t[1];   
                }
                break;
        }
        cin>>o;
    }
    for(auto x : t)cout<<x<<" ";
}
