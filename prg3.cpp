#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b = 5)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
float multiply(float a, float b)
{
    return a * b;
}
int main()
{
    int x = 20, y = 10;
    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction (with default argument): " << subtract(x) << endl;
    cout << "Subtraction (with two arguments): " << subtract(x, y) << endl;
    cout << "Multiplication (int): " << multiply(x, y) << endl;
    cout << "Multiplication (float): " << multiply(5.5f, 2.0f) << endl;
    return 0;
}