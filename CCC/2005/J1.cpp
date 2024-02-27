#include <bits/stdc++.h>
using namespace std;

int main() {
    int d,e,w;cin >> d >> e >> w;
    double a=0.0,b=0.0;
    
    a += 0.15*e + 0.20*w;
    b += 0.35*e + 0.25*w;
    
    if (d > 100){
        a += (d-100)*0.25;
    }
    if (d > 250){
        b += (d-250)*0.45;
    }
    
    printf("%s %.2f\n", "Plan A costs",a);
    printf("%s %.2f\n", "Plan B costs",b);
    if(a==b){
        cout << "Plan A and B are the same price.";
    }else if(a<b){
        cout << "Plan A is cheapest.";
    }else{
        cout << "Plan B is cheapest.";
    }
}
