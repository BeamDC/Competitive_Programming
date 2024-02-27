#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t=0;cin >> n;

    while (n >= 0){
        if(n%4 == 0)++t;
        n-=5;
    }
    cout << t;
}
