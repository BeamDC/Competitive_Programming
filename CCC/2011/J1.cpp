#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,e;
    scanf("%d %d",&a,&e);

    if(a>2 && e<5)cout<<"TroyMartian"<<'\n';
    if(a<7 && e>1)cout<<"VladSaturnian"<<'\n';
    if(a<3 && e<4)cout<<"GraemeMercurian"<<'\n';
}
