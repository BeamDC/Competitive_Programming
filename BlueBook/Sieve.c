#include <stdio.h>

int isPrime(int n){
    if(n==1)return 0;
    for(int i=2; i<=n/2; ++i){
        if(!(n%i))return 0;
    }return 1;
}

int main(){
    int n,p;
    scanf("%d",&n);
    for(int i=1; i<=n; ++i){
        p=isPrime(i);
        printf("%d\n",p);
    }return 0;
}
