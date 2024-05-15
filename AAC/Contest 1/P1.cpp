#include <bits/stdc++.h>

using namespace std;
int main() {
    int s;
    float r;
    scanf("%d %f", &s, &r);
    s*=s;r*=r;r*=3.14;

    if(s>r)printf("%s", "SQUARE");
    else if(s<r)printf("%s", "CIRCLE");
}
