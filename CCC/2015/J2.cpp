#include <bits/stdc++.h>
using namespace std;

int main() {
    int happy=0, sad=0, pos=0;
    string message;

    getline(cin, message);

    for (int i = 0; i < message.length()-2; ++i) {
        if(message[i] == ':' && message[i+1] == '-' && message[i+2] == ')'){
            ++happy;
        }
        else if(message[i] == ':' && message[i+1] == '-' && message[i+2] == '('){
            ++sad;
        }
        ++pos;
    }

    if(happy == 0 && sad == 0)cout<<"none";
    else if (happy == sad)cout<<"unsure";
    else if (happy > sad)cout<<"happy";
    else cout<<"sad";
}
