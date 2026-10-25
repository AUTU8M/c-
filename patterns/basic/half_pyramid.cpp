#include <iostream>

void printHalfPyramid(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

int main() {
    int rows = 5;
    printHalfPyramid(rows);
    return 0;
}
