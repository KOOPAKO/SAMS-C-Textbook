#include <iostream>

using namespace std;

int main()
{
    int *pInt;
    // *pInt = 9;
    // the error is due to the fact that pInt is not initialized
    // and therefore does not point to a valid memory location
    // to fix this, we can initialize pInt to point to a valid memory location
    // or we can use the new operator to dynamically allocate memory for pInt
    pInt = new int;
    *pInt = 9;

    cout << "The value at pInt: " << *pInt;

    return 0;
}