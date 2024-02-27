#include <bits/stdc++.h>

using namespace std;
int main() {
    int A=100,D=100,n,a,d;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> d;

        if(a>d)D-=a;
        else if(a<d)A-=d;
    }
    cout << A << '\n' << D;
}
