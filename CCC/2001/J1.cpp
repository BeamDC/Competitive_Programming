#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast

    int n,spaces,stars=1;cin>>n;
    spaces = (n*2)-2;
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < stars; ++j) {
            cout<<'*';
        }
        for (int j = 0; j < spaces; ++j) {
            cout<<' ';
        }
        for (int j = 0; j < stars; ++j) {
            cout<<'*';
        }cout<<nl;
        spaces-=4;
        stars+=2;
    }

    for (int i = 0; i < n*2; ++i) {
        cout<<'*';
    }cout<<nl;

    spaces+=4;
    stars-=2;
    
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < stars; ++j) {
            cout<<'*';
        }
        for (int j = 0; j < spaces; ++j) {
            cout<<' ';
        }
        for (int j = 0; j < stars; ++j) {
            cout<<'*';
        }cout<<nl;
        spaces+=4;
        stars-=2;
    }
}
