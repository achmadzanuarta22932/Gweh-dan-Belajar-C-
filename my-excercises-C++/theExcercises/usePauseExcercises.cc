#include <iostream> 
using namespace std;

void pause(); // prototpye 

int main ()
{
    cout << "Dear reader" << endl;
    cout << "have a," << endl;
    pause ();
    cout << "!" << endl;

    return 0;
}

void pause ()
{
    cout << "BREAK" << endl;
}