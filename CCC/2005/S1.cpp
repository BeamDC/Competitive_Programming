#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string temp, newStr;
    vector<string> ss(n);
    
    //create vector of strings
    for(int i=0;i<n;++i){
        cin >> temp;
        //remove all hyphens
        for(int j=0;j<temp.length();){
            if(temp[j]=='-'){
                temp.erase(j, 1);
            }else{
                ++j;
            }
        }
        
        ss[i] = temp.substr(0,10);
    }
    
    for (int i=0;i<n;++i){
        temp = ss[i];
        newStr = "";
        for(int j=0;j<10;++j){
            if(j==3 || j==6){
                newStr.push_back('-');
            }
            
            if(temp[j]=='A'||temp[j]=='B'||temp[j]=='C')newStr.push_back('2');
            else if(temp[j]=='D'||temp[j]=='E'||temp[j]=='F')newStr.push_back('3');
            else if(temp[j]=='G'||temp[j]=='H'||temp[j]=='I')newStr.push_back('4');
            else if(temp[j]=='J'||temp[j]=='K'||temp[j]=='L')newStr.push_back('5');
            else if(temp[j]=='M'||temp[j]=='N'||temp[j]=='O')newStr.push_back('6');
            else if(temp[j]=='P'||temp[j]=='Q'||temp[j]=='R'||temp[j]=='S')newStr.push_back('7');
            else if(temp[j]=='T'||temp[j]=='U'||temp[j]=='V')newStr.push_back('8');
            else if(temp[j]=='W'||temp[j]=='X'||temp[j]=='Y'||temp[j]=='Z')newStr.push_back('9');
            else newStr.push_back(temp[j]);
        }
        ss[i] = newStr;
    }
    
    //output all phone nums
    for(int i=0;i<n;++i){
        cout << ss[i] << '\n';
    }
    
}
