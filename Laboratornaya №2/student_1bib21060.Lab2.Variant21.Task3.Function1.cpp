#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;
void RBPO::Lab2::Variant21::Task3::Function1() {
    double x, y;
    std::cout << "������� �������� x � y ��� ������ �������: ";
    std::cin >> x >> y;
    if (x <= 0 || y <= 0) {
        // ��������� ������������ �������� x � y, ����� �������� ������� �� ���� � ���������� ����� �� �������������� �����
        std::cout << "������������ �������� x � y" << std::endl;
    }

    double result = (std::sqrt(x) - std::sqrt(y)) / x;
    std::cout << "��������� ������� f1(x, y) = " << result << std::endl;
}