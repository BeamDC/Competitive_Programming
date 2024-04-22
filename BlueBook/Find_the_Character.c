#include <stdio.h>
int main(){
  int o=0;
    char c,s;
    scanf("%c",&c);
    scanf("%c",&s);
    while(s!='.'){
      if(s<90)s+=32;
      if(s == c)++o;
      scanf("%c",&s);  
      printf("%c",s);
    }printf("\n%d",o);
    
    return 0;
}
