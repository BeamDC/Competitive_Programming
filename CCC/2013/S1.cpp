#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;cin>>y;

    while (true){
        ++y;
        string a= to_string(y);
        set<char> b(a.begin(), a.end());
        if(a.size() == b.size())break;
    }
    cout << y;
}
