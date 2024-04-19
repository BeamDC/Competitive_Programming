#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    for(int i=m; i<=n; ++i){
        int a,b,c;
        a = (i/100)%10;
        b = (i/10)%10;
        c = i%10;
        a *= a*a;
        b *= b*b;
        c *= c*c;
        a += b+c;
        if(!(i-a))printf("%d\n",i);
        // printf("%d - %d, %d, %d\n",i,a,b,c);
    }
    return 0;
}
