#include <iostream>
int main() {
    int b;

    std::cin >> b;

    b *= 5;
    b -= 400;

    std::cout << b;
    std::cout << '\n';
    if(b == 100){
        std::cout << 0;
    }
    else{
        int result = (b < 100) ? 1 : -1;
        std::cout << result;
    }

    return 0;
}
