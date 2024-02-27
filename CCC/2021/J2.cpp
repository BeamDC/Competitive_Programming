#include <iostream>
#include <string>

int main() {
    std::string s, w;
    int n, v, max = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        std::cin >> v;

        if(v > max){
            max = v;
            w = s;
        }
    }

    std::cout << w;
    return 0;
}
