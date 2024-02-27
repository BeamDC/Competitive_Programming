#include <bits/stdc++.h>

int main() {
    int l,s;
    scanf("%d %d",&l,&s);

    if(s<=l)printf("%s", "Congratulations, you are within the speed limit!");
    else if(s-l >=1 && s-l <=20)printf("%s", "You are speeding and your fine is $100.");
    else if(s-l >=21 && s-l <=30)printf("%s", "You are speeding and your fine is $270.");
    else if(s-l >=31)printf("%s", "You are speeding and your fine is $500.");
}
