#include <stdio.h>

int main(){
    for(int i=0;i<10;++i){
        int n,t;
        scanf("%d %d",&n,&t);
        --n;
        printf("%d\n",n+n+1);
    }
    return 0;
}
