#include <iostream>

int main()
{

    unsigned short yourAge = 10;
    unsigned short *pAge = &yourAge;

    // set yourAge to 50 by using the pointer
    *pAge = 50;

    // print out the value of yourAge
    std::cout << "yourAge: " << yourAge << std::endl;

    pAge = nullptr;

    return 0;
}
