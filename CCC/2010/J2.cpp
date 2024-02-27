#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,b,c,d,s,t=0,N=0,B=0;
    cin >> a >> b >> c >> d >> s;

    while (t<s){
        if(t+a <= s){
            N += a;
            t += a;
        }else if(t+a > s){
            N += s-t;
            t += s-t;
        }

        if(t+b <= s){
            N -= b;
            t += b;
        }else if(t+b > s){
            N -= s-t;
            t += s-t;
        }
    }
    t=0;
    while (t<s){
        if(t+c <= s){
            B += c;
            t += c;
        }else if(t+c > s){
            B += s-t;
            t += s-t;
        }

        if(t+d <= s){
            B -= d;
            t += d;
        }else if(t+d > s){
            B -= s-t;
            t += s-t;
        }
    }

    if(N>B)cout << "Nikky";
    else if(N<B)cout << "Byron";
    else cout << "Tied";
}
