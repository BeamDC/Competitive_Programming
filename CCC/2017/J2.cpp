#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, r, t;
    cin >> n >> r;
    t = n;
    for (int i = 0; i < r; ++i) {
        n *= 10;
        t += n;
    }
    cout << t;
}
