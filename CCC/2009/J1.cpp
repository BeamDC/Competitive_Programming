#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
  
    string isbn = "9780921418000";
    int t=0;
    cin>>isbn[10];cin>>isbn[11];cin>>isbn[12];
    for(int i=0;i<13;i+=2){
        t+=(isbn[i]-'0');
    }
    for(int i=1;i<13;i+=2){
        t+=(isbn[i]-'0')*3;
    }cout<<"The 1-3-sum is "<<t;
}
