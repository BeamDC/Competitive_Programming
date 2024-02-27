#include <bits/stdc++.h>

using namespace std;
int main() {

    int n,o=0;
    string a,b;
    cin >> n >> a >> b;

    for (int i = 0; i < a.length(); ++i) {
        if(a[i] == 'C' && b[i] == 'C'){
            o++;
        }
    }
    printf("%d", o);
}
