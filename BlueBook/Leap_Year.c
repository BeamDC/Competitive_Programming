#include <stdio.h>
int main(){
    int n,y;
    scanf("%d",&n);
    for(int i=0; i<n; ++i){
      scanf("%d",&y);
      if((!(y%4) && y%100 ) || !(y%400))printf("1\n");
      else printf("0\n");
    }
    return 0;
}
