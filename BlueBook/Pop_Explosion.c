#include <stdio.h>

int main(){
    float p;
    int a,y,b;

    scanf("%f %d %d %d",&p,&a,&y,&b);
    p/=100;
    p+=1;
    while(a < b){
        ++y;
        a *= p;
    }
    printf("%d",y);
}
