#include <bits/stdc++.h>

using namespace std;
int main() {
    int k;
    char icon[3][3] = {
            {'*','x','*'},
            {' ','x','x'},
            {'*',' ','*'}
    };
    scanf("%d", &k);
    
    for (int i = 0; i < 3; ++i) {
        for (int a = 0; a < k; ++a) {
            for (int j = 0; j < 3; ++j) {
                cout << string(k, icon[i][j]);
            }
            cout << '\n';
        }
    }
}
