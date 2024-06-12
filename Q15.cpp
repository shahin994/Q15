#include <iostream>

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    printPattern(number);

    return 0;
}