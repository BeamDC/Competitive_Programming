#include <bits/stdc++.h>

using namespace std;
struct velocity{
    double time;
    double pos;
};

bool _sort(velocity v1, velocity v2)
{
    return v1.time < v2.time;
}

int main() {
    int n;cin >> n;
    vector<velocity> v(n);
    double s=0, ts;

    for (int i = 0; i < n; ++i) {
        cin >> v[i].time >> v[i].pos;
    }

    sort(v.begin(), v.end(), _sort);

    for (int i = 0; i < n-1; ++i) {
        ts = abs((v[i].pos - v[i+1].pos) / (v[i].time - v[i+1].time));
        if(ts > s){
            s = ts;
        }
    }
    cout << fixed << s;
}
