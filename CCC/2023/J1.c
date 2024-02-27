#include<stdio.h>

int main() {
    int p = 0;
    int c = 0;
    int f = 0;
    
    scanf("%i", &p);
    scanf("%i", &c);
    
    f += (50*p);
    f -= (10*c);
    
    if (p>c)f+=500;
    
    printf("%i", f);
}
