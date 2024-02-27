#include <bits/stdc++.h>

using namespace std;
int main() {

    int n, p;
    cin >> n;
    vector<int> x;
    vector<int> y;

    string xy;
    for (int i = 0; i < n; ++i) {
        cin >> xy;
        p = xy.find(',');
        x.push_back(stoi(xy.substr(0,p)));
        y.push_back(stoi(xy.substr(p+1,xy.length()-p)));
    }

    int min_x = *min_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());

    int max_x = *max_element(x.begin(), x.end());
    int max_y = *max_element(y.begin(), y.end());

    cout << min_x - 1 << "," << min_y - 1 << endl;
    cout << max_x + 1 << "," << max_y + 1;

    return 0;
}
