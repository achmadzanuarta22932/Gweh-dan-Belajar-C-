#include <iostream> 

int main() {
  /*  std::cout << "The sum of " << v1;
            << " and " << v2; 
            << " is " v1 + v2 << std::endl;
            */

// the reason there is not working it is becaue it is wrong 

std::cout << " enter two numbers: " << std::endl;
int v1 = 0, v2 = 0;
std::cin >> v1 >> v2;
std::cout << "the sum of " << v1 
 << " and " << v2 << " is " << v1 + v2 << std::endl;

 // there is no std::cin -> the user need to input the variable data 
 // and must include int type data for v1 and v2 
 // also it is read order from top to bottom 
 //above is the correct way to code that 
 return 0;
}