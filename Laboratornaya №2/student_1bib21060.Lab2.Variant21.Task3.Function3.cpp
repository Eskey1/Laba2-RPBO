#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;

void RBPO::Lab2::Variant21::Task3::Function3() {
    std::cout << "Введите значение n для третьей функции: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    do {
        sum += FunctionA(i); // Суммирование значения функции a(i)
        i++;
    } while (i <= n);
    std::cout << "Результат функции f3(n) = " << sum << std::endl;
}