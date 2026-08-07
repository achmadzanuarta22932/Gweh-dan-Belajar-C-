#include <iostream> 
using namespace std;

int main()
{
    std::cout << "enter two numbers: " << std::endl;
    int varX = 0, varY = 0; // the var are 0 (empty) so when entering the desined number 
    std::cin >> varX >> varY; // input the text cin called the enter 2 number into the CLI
    std::cout << "the multipication of " << varX  << " and " << varY 
        << " is " << varX * varY << std::endl; // the number will multipy in here when we trigered the cin 

    return 0;
}