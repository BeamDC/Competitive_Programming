#include <bits/stdc++.h>

using namespace std;
int main() {
   string w, c="IOSHZXN";cin>>w;
   bool valid;

    for (int i = 0; i < w.length(); ++i) {
        for (int j = 0; j < 8; ++j) {
            if(i==8 || w[i]!=c[j]){
                valid=false;
            }
            else if(w[i]==c[j]){
                valid=true;
                break;
            }
        }
    }

    if(valid){
        printf("%s","YES");
    }else{
        printf("%s","NO");
    }
}
