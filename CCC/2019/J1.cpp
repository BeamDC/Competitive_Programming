#include <bits/stdc++.h>

using namespace std;
int main() {

    int a,b,tp,lu,ft;

    cin >> tp >> lu >> ft;
    a = tp*3 + lu*2 + ft;

    cin >> tp >> lu >> ft;
    b = tp*3 + lu*2 + ft;

    if(a > b){
        cout << "A";
    }else if(a < b){
        cout << "B";
    }else{
        cout << "T";
    }

    return 0;
}
