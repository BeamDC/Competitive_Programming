#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p=0;scanf("%d", &n);
    vector<int> r1(n), r2(n);

    scanf("%d", &r1[0]);
    for (int i = 1; i < n; ++i) {
        scanf(" %d", &r1[i]);
    }
    scanf("%d", &r2[0]);
    for (int i = 1; i < n; ++i) {
        scanf(" %d", &r2[i]);
    }

    p += count(r1.begin(), r1.end(), 1) * 3;
    p += count(r2.begin(), r2.end(), 1) * 3;

    for (int i = 0; i < n; ++i) {
        if(r1[i] == 1 && r1[i+1] == 1 && i != n-1){
            p-=2;
        }
        if(r2[i] == 1 && r2[i+1] == 1 && i != n-1){
            p-=2;
        }
        if(r1[i] == 1 && r2[i] == 1 && i%2 == 0){
            p-=2;
        }
    }

    cout << p << '\n';
}
