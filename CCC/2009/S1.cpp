#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,squareRootB,squareRootA,cubeRootB,cubeRootA,c=0;
    cin >> a >> b;
    squareRootB = sqrt(b);
    cubeRootB = cbrt(b);
    
    squareRootA = sqrt(a);
    cubeRootA = cbrt(a);

    for(int i = squareRootA; i<=squareRootB; ++i){
        for (int j = cubeRootA; j <= cubeRootB; ++j) {
            if(i*i == j*j*j)++c;
        }
    }
    cout << c << '\n';
}
