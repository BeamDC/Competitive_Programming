#include <bits/stdc++.h>
using namespace std;

int main() {
    string hv = "";
    cin >> hv;
    int Hcount = count(hv.begin(), hv.end(), 'H')%2;
    int Vcount = count(hv.begin(), hv.end(), 'V')%2;

    if (Hcount == 1 && Vcount == 1){
        ::printf("%d%c%d\n%d%c%d",4,' ',3,2,' ',1);
    }else if(Hcount == 0 && Vcount == 0){
        ::printf("%d%c%d\n%d%c%d",1,' ',2,3,' ',4);
    }
    else if (Hcount == 1 && Vcount == 0){
        ::printf("%d%c%d\n%d%c%d",3,' ',4,1,' ',2);
    }else if (Hcount == 0 && Vcount == 1){
        ::printf("%d%c%d\n%d%c%d",2,' ',1,4,' ',3);
    }
}
