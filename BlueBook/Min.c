#include <stdio.h>
int main(){
    int n;
    float m,a;
    scanf("%d\n%f",&n,&m);
    for(int i=0; i<n-1; ++i){
      scanf("%f",&a);
      if(a < m)m=a;
    }printf("%.2f",m);
    
    return 0;
}
