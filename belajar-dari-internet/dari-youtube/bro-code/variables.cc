// belajar dasar-dasar C++, memahami fungsi dari variables C++ 
// type data variables 

#include <iostream> // LIbrary 

int main() {

    /*Int X; // declarations
    X = 1;   // assignment 
    std:: cout << X;
    */

    // /* ..... */ block an command or syntax

   /* int y = 6; // declarations + assginment
    int z = 11; // declarations + assignment 

    int sum = y + z; //sumerize , hasil penambahan

    std:: cout << sum;
    */

    // integer ( whole number ), only assigned by number
    // example;

    int age = 20;
    int year = 2025;
    int days = 19;

    // double ( number including decimal) only assgined by decimal
    // example;

    double price = 10.99;
    double gpa   = 2.5;
    double temperature = 25.1;
    double pi = 3.14;

    // char (single character) only assigned single character 
    // example;

    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    // boolean (true or false ) only that true or false
    // example;

    bool alive = true;
    bool student = true;
    bool power = false;
    bool night = true;
    bool day   = false; 

    // string ( object that represent a sequence of text)
    // string used std for output
    //example;

    std::string name = "hakumori";
    std::string food = "ramen";
    std::string vibes = "nights";
    std::string adress = "123 future st.";

    std::cout << "Hello " << name << '\n';
    std::cout << "your are " << age << " years old, ";
    std::cout << "you like " << food << " and " << vibes;

    return 0;
}