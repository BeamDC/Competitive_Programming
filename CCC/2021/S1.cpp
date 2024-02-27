#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;cin >> n;
    double a=0.0;
    vector<int> h(n+1),w(n);

    for (int i = 0; i < n+1; ++i) {
        cin >> h[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    for (int i = 0; i < n; ++i) {
        a += w[i]*(h[i]+h[i+1])*0.5;
    }
    cout << fixed << a;
}
