#include <iostream>
#include <cmath>

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << "int" << std::endl;
    std::cout << "4 bytes" << std::endl;
    std::cout << pow(2, 31) * -1 << " - " << pow(2, 31) - 1 << std::endl;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << b - a << std::endl;
    std::cout << a * b << std::endl;
}

//выбрал int т.к в задании используются неотрицательные целые число, но их разность может быть отрицательной
