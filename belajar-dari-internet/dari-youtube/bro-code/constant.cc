// variables set to constant that the values are cant be changed
// the values seen as read only 

#include <iostream>

int main() {

    const double PI = 3.14159;
    const int hundred = 100;
    const int radius = 10;
    const char ExamGrade = 'A';
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}