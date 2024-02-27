#include <iostream>
int main() {
    int p, f, t, s, c=0;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> p >> f;

        s = (p*5) - (f*3);
        if (s > 40) {
            c++; //hilarious
        }
    }
    if(c == t){
        std::cout << std::to_string(c) + "+";
    }
    else{
        std::cout << c;
    }

}
