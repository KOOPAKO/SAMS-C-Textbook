#include <iostream>

int main()
{
    int myInteger = 10;

    int *pInteger = &myInteger;

    *pInteger = 20;

    std::cout << "myInteger: " << myInteger << std::endl;

    return 0;
}