#include <stdio.h>

int main(){
    char c1,c2,*out1,*out2;
    scanf("%c%c",&c1,&c2);
    if(c1=='M')out1 = "midget";
    else if(c1=='J')out1 = "junior";
    else if(c1=='S')out1 = "senior";
    else {printf("invalid code");return 0;}
    
    if(c2=='B')out2 = "boys";
    else if(c2=='G')out2 = "girls";
    else {printf("invalid code");return 0;}

    printf("%s %s", out1,out2);
    
    return 0;
}
