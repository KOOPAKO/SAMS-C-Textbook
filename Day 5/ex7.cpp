long long unsigned int power(unsigned short int x, unsigned short int y);

long long unsigned int power(unsigned short int x, unsigned short int y)
{
    return power(x, y - 1) * x;
}