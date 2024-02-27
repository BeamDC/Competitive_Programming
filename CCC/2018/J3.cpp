#include <bits/stdc++.h>

using namespace std;
int main() {
    vector<int> d = {0};
    for (int i = 1; i < 5; ++i) {
        scanf("%d", &d[i]);
        d[i] += d[i-1];
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << abs(d[j] - d[i]) << " ";
        }
        cout << '\n';
    }
}
