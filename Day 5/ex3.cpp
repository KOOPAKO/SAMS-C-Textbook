#include <iostream>
int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    x = 5;
    y = myFunc(x); // this was meant to take a value not a type
    std::cout << "x: " << x << " y: " << y << "\n";

    return 0;
}

// the return type of the function was void, so it could not return a value
int myFunc(unsigned short int x)
{
    return (4 * x);
}