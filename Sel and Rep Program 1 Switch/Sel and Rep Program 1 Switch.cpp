
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2, type, final;

    cout << "Please input the first number: ";
    cin >> num1;

    cout << "Please input the second number: ";
    cin >> num2;

    cout << "Please input 1 = Addition, 2 = Subtraction, or 3 = Multiply: ";
    cin >> type;

    switch (type) {
    case 1:
        final = num1 + num2;
        cout << num1 << " + " << num2 << " = " << final;
        break;
    case 2:
        final = num1 - num2;
        cout << num1 << " - " << num2 << " = " << final;
        break;
    case 3:
        final = num1 * num2;
        cout << num1 << " * " << num2 << " = " << final;
        break;
    }
}
