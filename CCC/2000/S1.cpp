#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c,s=0;
    cin>>n>>a>>b>>c;
    while(true){
        --n;++a;
        if(n<0)break;
        ++s;
        if(a%35==0){n+=30;}
        --n;++b;     
        if(n<0)break;
        ++s;
        if(b%100==0){n+=60;}
        --n;++c;
        if(n<0)break;
        ++s;
        if(c%10==0){n+=9;}
    }
    cout<<"Martha plays "<<s<<" times before going broke.";
}
