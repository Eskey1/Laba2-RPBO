#include <cmath>
#include <iostream>
module student_1bib21060.Lab2.Variant21.Task3;

double RBPO::Lab2::Variant21::Task3::FunctionA(int i) {
    double result = pow(-1, i) / ((i + 1) * (i + 2) * (i + 3));
    return result;
}