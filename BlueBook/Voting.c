#include <stdio.h>

int main(){
    int n,A=0,B=0,C=0,D=0,E=0,F=0,s=0;
    char v;
    scanf("%d\n",&n);
    for(int i=0;i<n;++i){
        scanf("%c\n",&v);
        if(v=='A')++A;
        else if(v=='B')++B;
        else if(v=='C')++C;
        else if(v=='D')++D;
        else if(v=='E')++E;
        else if(v=='F')++F;
        else ++s;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",A,B,C,D,E,F,s);
    
    return 0;
}
