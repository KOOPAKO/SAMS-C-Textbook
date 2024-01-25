#include <iostream>

using namespace std;

int main()
{
    int SomeVariable = 5;
    cout << "Some Variable: " << SomeVariable << "\n";
    int *pVar = &SomeVariable;
    *pVar = 9; // was missing the * operator to dereference the pointer
    cout << "Some Variable: " << SomeVariable << "\n";
    return 0;
}