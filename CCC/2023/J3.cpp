#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {0,0,0,0,0};
    int n, maximum,days;
    string p;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> p;
        for (int j = 0; j < 5; ++j) {
            if(p[j]=='Y'){
                ++a[j];
            }
        }
    }

    maximum += *max_element(a.begin(), a.end());
    days = count(a.begin(), a.end(), maximum);

    for (int i = 0; i <5 ; ++i) {
        if(days==1 && a[i]==maximum){
            cout << i+1;
        }
        else if(a[i]==maximum){
            cout << i+1 <<',';
            --days;
        }
    }
}
