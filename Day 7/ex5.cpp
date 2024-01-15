#include <iostream>

int main()
{
    int x = 100;
    do
    {
        std::cout << x << std::endl;
        x += 2;
    } while (x != 202);

    return 0;
}