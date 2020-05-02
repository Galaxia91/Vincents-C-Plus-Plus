#include <iostream>
int main () {
    for (int i = 9; i > 0; i = i - 1) {
        for (int j = 0; j < 10 - i; j = j + 1) {
              std::cout << "*";
        }
    std::cout << "\n";
    }
}