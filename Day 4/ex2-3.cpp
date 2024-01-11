#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter three numbers\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (c = (a - b))
        //{
        cout << "a: " << a << " minus b: " << b << " equals c: " << c << "\n";
    //}
    else
        //{
        cout << "a-b does not equal c\n";
    //}

    return 0;
}