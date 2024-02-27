#include <bits/stdc++.h>

using namespace std;
int main() {
    int A=0,B=0,n,o=0;
    char ab, cd;

    cin >> o;
    while (o!=7){
        if (o==1){
            cin >> ab >> n;
            if(ab == 'A')A=n;
            else if(ab == 'B')B=n;
        }
        else if(o==2){
            cin >> ab;
            if(ab == 'A')cout << A << '\n';
            else if(ab == 'B')cout << B << '\n';
        }
        else if(o==3){
            cin >> ab >> cd;
            if(ab == 'A' && cd == 'A')A*=2;
            else if(ab == 'A' && cd == 'B')A=A+B;
            else if(ab == 'B' && cd == 'B')B*=2;
            else if(ab == 'B' && cd == 'A')B=B+A;
        }
        else if(o==4){
            cin >> ab >> cd;
            if(ab == 'A' && cd == 'A')A*=A;
            else if(ab == 'A' && cd == 'B')A*=B;
            else if(ab == 'B' && cd == 'B')B*=B;
            else if(ab == 'B' && cd == 'A')B*=A;
        }
        else if(o==5){
            cin >> ab >> cd;
            if(ab == 'A' && cd == 'A')A=0;
            else if(ab == 'A' && cd == 'B')A-=B;
            else if(ab == 'B' && cd == 'B')B=0;
            else if(ab == 'B' && cd == 'A')B-=A;
        }
        else if(o==6){
            cin >> ab >> cd;
            if(ab == 'A' && cd == 'A')A=1;
            else if(ab == 'A' && cd == 'B')A/=B;
            else if(ab == 'B' && cd == 'B')B=1;
            else if(ab == 'B' && cd == 'A')B/=A;
        }
        cin >> o;
    }
}
