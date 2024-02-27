#include <bits/stdc++.h>

using namespace std;
int main() {
    int m, d;
    ::scanf("%d %d", &m, &d);

    if(m>2)cout << "After";
    else if(m<2)cout << "Before";
    else if(d > 18)cout << "After";
    else if(d < 18)cout << "Before";
    else cout << "Special";
}
