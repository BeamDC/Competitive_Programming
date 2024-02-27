#include <bits/stdc++.h>
using namespace std;

int main() {
    float w,h,bmi;scanf("%f\n%f",&w,&h);
    bmi = w/(h*h);
    if (bmi>25)printf("Overweight");
    else if (bmi<18.5)printf("Underweight");
    else printf("Normal weight");
}
