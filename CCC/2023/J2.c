#include<stdio.h>
int main() {
    int n = 0;
    int s = 0;
    
    char p[20];
    scanf("%i", &n);
    for(int i=0; i < n; i++){
        scanf("%s", &p);   
        if(p[0] == 'P')s+=1500;
        else if(p[0] == 'M')s+=6000;
        else if(p[0] == 'S')s+=15500;
        else if(p[0] == 'C')s+=40000;
        else if(p[0] == 'T')s+=75000;
        else if(p[0] == 'H')s+=125000;
    }
    printf("%i", s);
}
