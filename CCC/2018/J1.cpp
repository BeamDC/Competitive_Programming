#include <bits/stdc++.h>

using namespace std;
int main() {

    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if((a > 7 && d > 7) && b == c){
        cout << "ignore";
    }else{
        cout << "answer";
    }
}
