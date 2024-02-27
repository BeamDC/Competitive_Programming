#include <bits/stdc++.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if(a==b && b==c && c==d)printf("%s", "Fish At Constant Depth");
    else if(a < b && b < c && c < d)printf("%s", "Fish Rising");
    else if(a > b && b > c && c > d)printf("%s", "Fish Diving");
    else printf("%s", "No Fish");
}
