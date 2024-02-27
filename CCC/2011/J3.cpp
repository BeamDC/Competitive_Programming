#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c=2,temp;
    scanf("%d %d",&a,&b);

    while(a >= b){
        temp = a-b;
        a=b;b=temp;
        ++c;
    }

    printf("%d",c);
}
