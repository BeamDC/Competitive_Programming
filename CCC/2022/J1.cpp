#include <iostream>
int main() {
    int r = 0;
    int s = 0;

    std::cin >> r;
    std::cin >> s;

    r *= 8;
    s *= 3;

    std::cout << (r+s) - 28;
    return 0;
}
