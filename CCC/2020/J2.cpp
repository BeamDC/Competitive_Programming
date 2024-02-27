#include <bits/stdc++.h>

using namespace std;
int main() {
    int p,n,r,t,i,d=0;

    cin >> p >> n >> r;
    t=n;i=n;

    while(true){
        t = t + (i*r);
        i *= r;
        d++;
        if(t == p){
            cout << d+1;
            break;
        }else if(t > p){
            cout << d;
            break;
        }
    }
    return 0;
}
