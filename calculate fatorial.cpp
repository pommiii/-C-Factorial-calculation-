#include <iostream>

int main() {
    int n;
    std::cout << "Enter positive whole number: ";
    std::cin >> n;

    int fact = 1;
    for (int r = 1; r <= n; ++r) {
        fact *= r;
    }
    std::cout << "Here is the answer: " << fact;
    return 0;
}
