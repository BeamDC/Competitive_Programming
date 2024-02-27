#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,s=1,n;
    while(true){
        cin>>m;
        if(m==0){
            cout<<"You Quit!";
            break;
        }
        n=s+m;
        if(n<=100){
            switch (n){
                case 9:
                    s=34;
                    break;
                case 40:
                    s=64;
                    break;
                case 54:
                    s=19;
                    break;
                case 67:
                    s=86;
                    break;
                case 90:
                    s=48;
                    break;
                case 99:
                    s=77;
                    break;
                default:
                    s=n;
            }
        }
        cout<<"You are now on square "<<s<<'\n';
        if(s==100){
            cout<<"You Win!";
            break;
        }
    }
}
