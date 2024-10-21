#include <bits/stdc++.h>

using namespace std;
int main() {
    int s,m,l, t;
    string feels;

    cin >> s >> m >> l;

    t = s+(m*2)+(l*3);

    feels = (t<10) ? "sad" : "happy";
    cout << feels;

    return 0;
}
