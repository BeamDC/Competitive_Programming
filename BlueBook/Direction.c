#include <stdio.h>
int main(){
    int t,n;
    scanf("%d\n",&t);
    for(int i=0; i<t; ++i){
      scanf("%d\n",&n);
      char dir;
      if(n >= 315 || n <= 45)dir='N';
      else if (n > 45 && n <=135)dir = 'E';
      else if (n > 135 && n <= 225)dir = 'S';
      else dir = 'W';
      printf("%c\n",dir);
    }
    
    return 0;
}
