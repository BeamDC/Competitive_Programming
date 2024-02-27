#include <iostream>
#include <string>
int main() {
    std::string s;

    std::cin >> s;

    for (int i = 0; i < s.length(); i++){
        if(s[i] == '+'){
            std::cout << " tighten ";
        }
        else if(s[i] == '-'){
            std::cout << " loosen ";
        }
        else if(!std::isdigit(s[i]) and std::isdigit(s[i-1]) ){
            std::cout << '\n';
            std::cout << s[i];
        }
        else if(std::isupper(s[i])){
            std::cout << s[i];
        }
        else if (std::isdigit(s[i]) ){
            std::cout << s[i];
        }
    }
    return 0;
}
