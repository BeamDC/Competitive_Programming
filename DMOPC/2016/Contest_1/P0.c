#include <stdio.h>

int main(){
    int w,c;
    scanf("%d\n%d",&w,&c);
    char* s = "very";
    if(w==3&&c>94)s="absolutely";
    else if (w==1&&c<51)s="fairly";
    printf("C.C. is %s satisfied with her pizza.",s);
    return 0;
}
