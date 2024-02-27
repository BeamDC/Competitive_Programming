#include <bits/stdc++.h>
using namespace std;

int main() {
    int k=0,c;
    string e,d,alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> k >> e;
    for (int i = 0; i < e.length(); ++i) {
        c = (e[i]-'A' + (26-(3*(i+1)+k)%26));
        c %= 26;
        d.push_back(alphabet[c]);
    }
    cout << d;
}
