#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,a=0,b=0;
    string v;

    cin >> n >> v;

    for (int i = 0; i < n; ++i) {
        if(v[i]=='A')++a;
        else if(v[i]=='B')++b;
    }

    if(a==b)cout<<"Tie";
    else if(a>b)cout<<"A";
    else cout<<"B";
}
