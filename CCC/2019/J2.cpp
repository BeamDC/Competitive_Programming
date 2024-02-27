#include <bits/stdc++.h>

using namespace std;
int main() {

    int l; scanf("%d", &l);

    for (int i = 0; i < l; ++i) {
        int n;
        char c;
        cin >> n >> c;
        for (int j = 0; j < n; ++j) {
            cout << c;
        }
        cout << '\n';
    }

    return 0;
}
