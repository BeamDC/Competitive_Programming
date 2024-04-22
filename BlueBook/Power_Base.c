#include <stdio.h>
int main(){
    int n,p;
    float b,ans=1;
    scanf("%d",&n);
    
    for(int i=0; i<n; ++i){
      scanf("%f %d",&b,&p);
      for(int j=0; j<p; ++j){
        ans*=b;
      }printf("%.2f\n",ans);
      ans=1;
    }
    
    return 0;
}
