#include <stdio.h>

int main(){
    int n=100,m=200;
    scanf("%d\n%d",&n,&m);

    if(n%m){
        printf("no");
        return 0;
    }printf("yes");
    return 0;
}
