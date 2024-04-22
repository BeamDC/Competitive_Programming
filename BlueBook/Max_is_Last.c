#include <stdio.h>
int main(){
    int n,ind=0;
    scanf("%d",&n);
    float max,nn[n];
    scanf("%f\n",&nn[0]);
    max = nn[0];
    for(int i=1; i<n; ++i){
        scanf("%f\n",&nn[i]);
        if(nn[i] > max){max = nn[i];ind = i;}
    }
    for(int i=0; i<n; ++i){
        if(i != ind){
            printf("%.2f\n",nn[i]);   
        }else continue;
    }
    printf("%.2f",max);
    return 0;
}
