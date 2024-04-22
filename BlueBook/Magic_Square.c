#include <stdio.h>
int main(){
    int s,r;
    scanf("%d",&s);
    for(int i=0; i<s; ++i){
        scanf("%d",&r);
        int m[r][r],sumr=0,sumc=0,nsumr=0,nsumc=0,magic=1;
        for(int j=0; j<r; ++j){
            for(int k=0; k<r; ++k){
                scanf("%d",&m[j][k]);
            }  
        }
        
        for(int row=0; row<r; ++row){
            sumr += m[0][row];
        }
        for(int col=0; col<r; ++col){
            sumc += m[col][0];
        }
        
        // printf("SUMR: %d\n",sumr);
        // printf("SUMC: %d\n\n",sumc);
        
        for(int a=0; a<r; ++a){
            for(int b=0; b<r; ++b){
                nsumr +=m[a][b];
                nsumc +=m[b][a];
            }
            // printf("NSUMR: %d\n",nsumr);
            // printf("NSUMC: %d\n\n",nsumc);
            if(nsumr != sumr || nsumc != sumc){--magic;break;}
            nsumr = 0;
            nsumc = 0;
        }
        
        
        if(magic)printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}
