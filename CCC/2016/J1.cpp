#include <bits/stdc++.h>

using namespace std;
int main() {
    int div = 0;
    char wl;

    for (int i = 0; i < 6; ++i) {
        cin >> wl;
        if(wl == 'W'){
            ++div;
        }
    }
    if (div >= 5) cout << 1;
    else if (div >= 3) cout << 2;
    else if (div >= 1) cout << 3;
    else cout << -1;
}
