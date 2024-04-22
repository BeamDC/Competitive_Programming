#include <stdio.h>
int main(){
    int c,q=0,d=0,n=0,p=0;
    scanf("%d",&c);
    
    if(c == 1)printf("1 cent requires ");
    else printf("%d cents requires ",c);
    
    while (c >= 25){c-=25;++q;}
    
    if(q==1) printf("1 quarter");
    else if(q > 1) printf("%d quarters",q);
    if(!c) {printf(".");return 0;}
    else if(c >= 10 && q) printf(", ");
    
    while (c >= 10){c-=10;++d;}
    
    if(d==1) printf("1 dime");
    else if(d > 1) printf("%d dimes",d);
    if(!c) {printf(".");return 0;}
    else if(c >= 5 && (q || d)) printf(", ");
    
    while (c >= 5) {c-=5 ;++n;}
    
    if(n==1) printf("1 nickel");
    else if(n > 1) printf("%d nickels",n);
    if(!c) {printf(".");return 0;}
    else if(c >= 1 && (q || d || n)) printf(", ");
    
    while (c >= 1) {c-=1 ;++p;}
    
    if(p==1) printf("1 cent");
    else if(p > 1) printf("%d cents",p);
    
    printf(".");
}
