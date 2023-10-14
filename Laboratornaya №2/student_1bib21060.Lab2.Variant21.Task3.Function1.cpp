#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;
void RBPO::Lab2::Variant21::Task3::Function1() {
    double x, y;
    std::cout << "Введите значения x и y для первой функции: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        // Обработка недопустимых значений x и y, чтобы избежать деления на ноль и извлечения корня из отрицательного числа
        std::cout << "Недопустимые значения x и y" << std::endl;
    }

    double result = (std::sqrt(x) - std::sqrt(y)) / x;
    std::cout << "Результат функции f1(x, y) = " << result << std::endl;
}