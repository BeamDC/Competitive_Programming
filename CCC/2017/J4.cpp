#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int m,tm=0,th=12,seq=0;cin >> m;
    ++m;
    seq += (int)(m/720) * 31;
    m%=720;
    while(--m){
        tm+=1;
        if(tm==60){
            tm = 0;
            th+=1;
        }
        if(th==13)th=1;

        if(th < 10 && th%10 - (tm/10)%10 == (tm/10)%10 - tm%10){
            ++seq;
        }
        else if((th/10)%10 - th%10 == th%10 - (tm/10)%10 &&
            th%10 - (tm/10)%10 == (tm/10)%10 - tm%10){
                ++seq;
            }
    }
    cout << seq;
    return 0;
}
