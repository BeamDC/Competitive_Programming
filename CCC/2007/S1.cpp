#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,m,d,n;cin>>n;
    for (int i=0;i<n;++i){
        bool l = true;
        cin >> y >> m >> d;
        if (y > 1989)l=false;
        else if (y == 1989 && m>2)l=false;
        else if (y == 1989 && m == 2 && d>27)l=false;
        if(l)cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';   
    }
}
