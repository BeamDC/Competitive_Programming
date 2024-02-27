#include <bits/stdc++.h>

using namespace std;
int main() {
    string n, dir;
    int sum;
    cin >> n;
    while (n!="99999"){
        sum = (n[0] - '0') + (n[1] - '0');

        if(sum==0)cout << dir;
        else if(sum%2==0) {
            dir = "right ";
            cout << dir;
        }
        else if(sum%2==1) {
            dir = "left ";
            cout << dir;
        }

        cout << n[2] << n[3] << n[4] << '\n';

        cin >> n;
    }
}
