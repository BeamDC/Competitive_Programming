#include <stdio.h>
#include <string.h>

int main(){
    char d[1000000];
    scanf("%s",&d);
    int len = strlen(d);
    for(int i=len - 1; i>=0; --i){
        printf("%c\n",d[i]);
    }
    
    return 0;
}
