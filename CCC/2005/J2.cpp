#include <bits/stdc++.h>
using namespace std;

bool isRSA (int n){
    int d = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n%i == 0) {
            if (n/i==i)++d;
            else d+=2;
        }
    }
    return d==4;
}

int main() {
    int a,b,t=0;
    scanf("%d\n%d",&a,&b);
    for (int i = a; i < b+1; ++i) {
        if(isRSA(i))++t;
    }
    printf("%s%d%s%d%s%d","The number of RSA numbers between ", a," and ", b," is ",t);
}
