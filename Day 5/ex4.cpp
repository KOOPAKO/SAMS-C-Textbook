#include <iostream>

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    x = 7;
    y = myFunc(x);
    std::cout << "x: " << x << " y: " << y << "\n";

    return 0;
}

int myFunc(unsigned short int x)
// this issue with this was there was a semicolon at the end of the line above
{
    return (4 * x);
}