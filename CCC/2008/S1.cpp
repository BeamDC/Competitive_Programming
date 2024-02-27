#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> c;
    vector<int> t;
    string name;
    int temp;

    while(find(c.begin(), c.end(), "Waterloo") == c.end()){
        cin >> name >> temp;
        c.push_back(name);
        t.push_back(temp);
    }
    cout << c[find(t.begin(),t.end(),*min_element(t.begin(), t.end())) - t.begin()];
}
