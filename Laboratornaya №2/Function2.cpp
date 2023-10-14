#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task4:Function2;
void RBPO::Lab2::Variant21::Task4::Function2() {
    std::cout << "Введите значения x для второй функции: ";
    double x;
    std::cin >> x;
    double result;
    if (x <= 3) {
        result = pow(x, 2) + 3 * x + 9;
    }
    else {
        result = sin(x) / (pow(x, 2) - 9);
    }
    std::cout << "Результат функции f2(x) = " << result << std::endl;
}