#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;

void RBPO::Lab2::Variant21::Task3::Function4() {
    std::cout << "������� �������� ���������� E ��� ��������� �������: ";
    double E;
    std::cin >> E;
    double sum = 0.0;
    double prevSum = 0.0;
    double nextSum = 0.0;
    int k = 0;
    int i = 0;
    do {
        prevSum = nextSum;
        nextSum = FunctionA(i);
        sum += FunctionA(i);
        k = i;
        if (std::abs(nextSum - prevSum) <= E) {
            break;
        }
        i++;
    } while (true);
    std::cout << "��������� ������� f4(E) = " << sum << std::endl << "����� �������� k = " << k << std::endl;
}