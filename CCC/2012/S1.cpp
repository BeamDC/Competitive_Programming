#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    unsigned int n,t=0;cin>>n;
    if(n<4){
        cout<<'0';
        return 0;
    }
    else if(n==4){
        cout<<'1';
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 2; j < n; ++j) {
            for (int k = 3; k < n; ++k) {
                if(i<j&&j<k)++t;
            }
        }
    }
    cout<<t;
}
