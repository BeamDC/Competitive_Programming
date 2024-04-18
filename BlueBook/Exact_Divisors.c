#include <stdio.h>

int main(){
    int n=100;
    scanf("%d",&n);
    printf("1\n%d",n);

    for (int i=2;i<n;++i){
        if(n%i==0)printf("\n%d",i);
    }
    
    return 0;
}
