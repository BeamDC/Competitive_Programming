//basic
#include <bits/stdc++.h>
using namespace std;
//optimizations
#pragma GCC optimize "Ofast"
#pragma GCC target("avx2")
#ifdef fread_unlocked
#define fread fread_unlocked
#endif
//macros
#define all(x) x.begin(), x.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//fast I/O
//the INPUT_SIZE should be as close to the max number of bits as possible
//since all input digits are chars, calculate the max number of chars
//then multiply the value by 8 since a char is one byte of memory
//the result is the max amount of memory needed to solve
//approximate using bit shift to get 
//the optimal amount of memory to allocate to the buffer
#define INPUT_SIZE (32<<20)
int _i0=0;
char _i[INPUT_SIZE];
char _;
#define fin_string(s) do{while(true){_=_i[_i0++];if(10<_){s.push_back(_);}else{break;}}}while(0)
#define finset(p) freopen(p,"r",stdin);fread(_i,1,INPUT_SIZE,stdin)

//this needs to still be tested, no idea if it works the way i want it to lol
template<typename T>
vector<T> parseln(char delimiter) {
    //read line of input
    string line;
    fin_string(line);
    
    istringstream iss(line);
    vector<T> result;
    string token;
    
    //split along whitespace and convvert to specified type
    while (getline(iss, token, delimiter)) {
        try {
            result.push_back(static_cast<T>(stod(token)));
        } catch (const invalid_argument& e) {
            cerr << "Invalid argument: " << e.what() << '\n';
        } catch (const out_of_range& e) {
            cerr << "Out of range: " << e.what() << '\n';
        }
    }
    return result;
}

// Overload for string inputs
template<>
vector<string> parseln<string>(char delimiter) {
    string line;
    fin_string(line);
    
    istringstream iss(line);
    vector<string> result;
    string token;
    
    while (getline(iss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}
/*****************************************************************************/
int main() {
    finset("Input.txt");
    //input format (for ints, space delimiter):
    //vector<int> = parseln<int>(' ');
    return 0;
}
/*****************************************************************************/
