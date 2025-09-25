#include <iostream>
#include <cmath>

int main() {
    int r;
    float konstanta = 13.1415;
    std::cout << "Введите радиус: ";
    std::cin >> r;
    std::cout << "Тип: float" << std::endl; //выбрал float, тк число с плавающей запятой(не целое)
    std::cout << "Размер в байтах: " << sizeof(konstanta) << std::endl;
    float minsize = pow(2, -126);
    float maxsize = (2 - pow(2, -23)) * pow(2, 127);
    std::cout << "Минимальное значение: " << minsize << std::endl;
    std::cout << "Максимальное значение: " << maxsize << std::endl;
    std::cout << "V = " << (4 * konstanta * pow(r, 3)) / 3 << std::endl;
    std::cout << "S = " << 4 * konstanta * pow(r, 2) << std::endl;
    return 0;
}
