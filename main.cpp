#include "sdt.h"
#include <iostream>
using namespace std;
//программа является учебной по спецификации
int main()
{
     int a, b;

    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Сумма чисел " << a + b << std::endl;
    std::cout << "Разность чисел " << a - b << std::endl;

    return 0;
}