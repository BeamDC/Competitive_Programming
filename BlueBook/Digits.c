#include <stdio.h>

int main(){
    int n,nn,d,m=1;
    scanf("%d",&nn);
    for(int i=0; i<nn; ++i){
        scanf("%d",&n);
        d=0;m=1;
        if(n < 0)n*=-1;
        if(n==0){printf("1\n");continue;}
        while(n%m != n){
            ++d;
            m *= 10;
        }printf("%d\n",d);
    }

    return 0;
}
