#include <iostream>
using namespace std;

void line(), message();     //prototype

int main()
{
    cout << "hallo the programs Start In Main()." << endl;
    line();
    message();
    line();
    cout << "at the end of the main()." << endl;

    return 0;
}

void line ()
{
   cout << "--------------------------------------------------------" << endl;
}

void message()
{
    cout << "infoction message ()." << endl;
}

//this is just a learning mechanism.
