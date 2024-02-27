#include <bits/stdc++.h>
using namespace std;

int main() {
    int rowSums[4] = {0},colSums[4] = {0}, n;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> n;
            rowSums[i] += n;
            colSums[j] += n;
        }
    }

    bool magic = true;
    for (int i = 1; i < 4; ++i) {
        if ((rowSums[i-1] != rowSums[i]) || (colSums[i-1] != colSums[i])){
            magic = false;
            break;
        }
    }

    if(magic)cout << "magic" << '\n';
    else cout << "not magic" << '\n';
}
