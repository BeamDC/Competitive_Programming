#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,m;
    bool grounded = false;
    scanf("%d %d", &h,&m);

    for (int i = 1; i <= m; ++i) {
        if((-6*pow(i,4) + h*pow(i,3) + 2*pow(i,2) + i) <= 0){
            printf("%s\n%d", "The balloon first touches ground at hour:", i);
            grounded = true;
            break;
        }
    }
    if(!grounded)printf("%s", "The balloon does not touch ground in the given time.");
}
