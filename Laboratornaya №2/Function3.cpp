#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task4:Function3;
import :FunctionA;
void RBPO::Lab2::Variant21::Task4::Function3() {
    std::cout << "������� �������� n ��� ������� �������: ";
    int n;
    std::cin >> n;
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += FunctionA(i); // ������������ �������� ������� a(i)
    }
    std::cout << "��������� ������� f3(n) = " << sum << std::endl;
}