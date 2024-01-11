#include <iostream>
using namespace std;

float myFunc(unsigned short int x, unsigned short int y);

int main()
{
    cout << "Please enter two numbers: ";
    unsigned short int x, y;
    cin >> x >> y;

    float result = myFunc(x, y);

    if (result == -1)
    {
        cout << "Error: cannot divide by zero\n";
    }
    else
    {
        cout << "Result: " << result << "\n";
    }

    return 0;
}

float myFunc(unsigned short int x, unsigned short int y)
{
    if (y == 0)
    {
        return -1;
    }

    return (x / y);
}