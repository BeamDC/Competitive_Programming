#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;++i){
        char s[256];
        scanf("%s",&s);
        for(int j=0; s[j]; ++j){
            if(s[j] > 64 && s[j] < 91)s[j] += 32;
        }
        printf("%s\n",s);
    }
    return 0;
}
