#include <cmath>
#include <iostream>
export module student_1bib21060.Lab2.Variant21.Task1;

namespace RBPO {
    namespace Lab2 {
        namespace Variant21 {
            namespace Task1 {
                export void Function1() {
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

                export void Function2() {
                    std::cout << "������� �������� x ��� ������ �������: ";
                    double x;
                    std::cin >> x;
                    double result = (x <= 3) ? (pow(x, 2) + 3 * x + 9) : (sin(x) / (pow(x, 2) - 9));
                    std::cout << "��������� ������� f2(x) = " << result << std::endl;
                }


                export double FunctionA(int i) {
                    double result = pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
                    return result;
                }

                export void Function3() {
                    std::cout << "������� �������� n ��� ������� �������: ";
                    int n;
                    std::cin >> n;
                    double sum = 0.0;
                    for (int i = 0; i <= n; i++) {
                        sum += FunctionA(i); // ������������ �������� ������� a(i)
                    }
                    std::cout << "��������� ������� f3(n) = " << sum << std::endl;
                }

                export void Function4() {
                    std::cout << "������� �������� ���������� E ��� ��������� �������: ";
                    double E;
                    std::cin >> E;
                    double sum = 0.0;
                    double prevSum = 0.0;
                    double nextSum = 0.0;
                    int k = 0;
                    for (int i = 0;; i++)
                    {
                        prevSum = nextSum;
                        nextSum = FunctionA(i);
                        sum += FunctionA(i);
                        k = i;
                        if (std::abs(nextSum - prevSum) <= E)
                        {
                            break;
                        }
                    }
                    std::cout << "��������� ������� f4(E) = " << sum << std::endl << "����� �������� k = " << k << std::endl;
                }
            }
        }
    }
}