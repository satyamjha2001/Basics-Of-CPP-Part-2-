#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Your number after swap " << a << " " << b;
    return 0;
}