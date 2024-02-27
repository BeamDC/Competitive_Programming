#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,sum=0,temp;cin>>k;
    stack<int> nums;
    for (int i=0;i<k;++i){
        cin >> temp;
        if(temp != 0){
            nums.push(temp);
        }else{
            nums.pop();
        }
    }
    while(!nums.empty()){
        sum += nums.top();
        nums.pop();
    }
    cout << sum;
}
