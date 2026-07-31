//  a solution for preventing conflicts in a large projects 
// each entities need unique name.
// an namespace allow identical named entities 
// as long as the namespace are different
// examples ;

#include <iostream>

namespace first { 
    int x = 1;
    int y = 1; 
    int z = x + y;
}

namespace second { 
    int x = 6;
    int y = 4;
    int z = x + y;
}

// actually if not using namespace we cant use the same variables or entities
// as it it is count as redeclarations, it may conflicts 
// if using namespace it count as identical name that allowed using namespaces 
// as long as the namespace are different

// name space also allowed using function which if used 
// it allowed namespace to not recal the entities where ever we wanted to use the variables
// examples;


using namespace std;

// the problem of using std ( standard ) 
// there are to many option for using std bacause 
// there is tons of library or type data that can be used for this entities 
// the safes way to use std is to add scope for make it works using scope operator :: 
// examples ; 

using std::cout;
using std::string;

int main() {

    cout << "hallo,world!" << endl;
    cout << "enjoy, learning C++" << endl;


    string name = "hakumori";
    string age = "20 years old";

    cout << "hallo!, my name is " << name << endl;
    cout << " im " << age << endl;

    cout << " does it works?" << endl;
    cout << " we hope it is works" << endl;

    return 0;
}


// notes, codes only works if it is inside it fuction 
// so compiler know what to compile 
// for large space project alwyas use scope :: for standarisasion ( std )