#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;

void RBPO::Lab2::Variant21::Task3::Function3() {
    std::cout << "������� �������� n ��� ������� �������: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    int i = 0;
    do {
        sum += FunctionA(i); // ������������ �������� ������� a(i)
        i++;
    } while (i <= n);
    std::cout << "��������� ������� f3(n) = " << sum << std::endl;
}