#include <iostream>
using namespace std;

// Call by Value
void swapValue(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// Call by Address
void swapAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Call by Reference
void swapReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;

    cout << "Enter value of x,y: ";
    cin >> x >> y;

    cout << "\nSwapping by Value\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    swapValue(x, y);

    cout << "Value after swap:\n";
    cout << "x:" << x << ", y:" << y << endl;

    // Reset values
    x = 10;
    y = 20;

    cout << "\nSwapping by Address\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    swapAddress(&x, &y);

    cout << "Value after swap:\n";
    cout << "x:" << x << ", y:" << y << endl;

    cout << "\nSwapping by Reference\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    swapReference(x, y);

    cout << "Value after swap:\n";
    cout << "x:" << x << ", y:" << y << endl;

    return 0;
}