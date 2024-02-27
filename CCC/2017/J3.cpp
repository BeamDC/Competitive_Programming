#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,t,distance;
    cin >> a >> b >> c >> d >> t;
    distance = abs(a-c) + abs(b-d);

    if(distance%2 == t%2 && distance <= t ){
        cout << "Y";
    }
    else {
        cout << "N";
    }
}
