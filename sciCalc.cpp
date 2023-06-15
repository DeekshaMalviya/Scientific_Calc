#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    cout << "\t\t***WELCOME TO THE SCIENTIFIC CALCULATOR DEVELOPED BY: DEEKSHA MALVIYA***\n\n " << endl;
    cout << "*Press 0 to quit the program* \n\n " << endl;
    cout << "*Enter 1 for Addition* \n"
         << endl;
    cout << "*Enter 2 for Subtraction*  \n"
         << endl;
    cout << "*Enter 3 for Multiplication* \n"
         << endl;
    cout << "*Enter 4 for Division* \n"
         << endl;
    cout << "*Enter 5 for Factorial* \n"
         << endl;
    cout << "*Enter 6 for Power* \n"
         << endl;
    cout << "*Enter 7 for Square* \n"
         << endl;
    cout << "*Enter 8 for Cube* \n"
         << endl;
    cout << "*Enter 9 for Square root*\n\n"
         << endl;

    int choice;
    while (true)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            factorial();
            break;

        case 6:
            power();
            break;

        case 7:
            square();
            break;

        case 8:
            cube();
            break;

        case 9:
            squareroot();
            break;

        case 0:
            exit(0);
            break;

        default:
            cout << "\n ***Wrong choice, Enter a valid number.***\n" << endl;
            break;
        }
    }
    return 0;
}

void addition()
{
    cout << "Enter the numbers you want to add: ";
    int a, b;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
}

void subtraction()
{
    cout << "Enter the numbers you want to subtract: ";
    int a, b;
    cin >> a >> b;
    cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
}

void multiplication()
{
    cout << "Enter the numbers you want to multiply: ";
    int a, b;
    cin >> a >> b;
    cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
}

void division()
{
    cout << "Enter the numbers you want to divide: ";
    int a, b;
    cin >> a >> b;
    cout << "The division of " << a << " and " << b << " is " << static_cast<float>(a) / b << endl;
}

void factorial()
{
    cout << "Enter the number you want to know the factorial of: ";
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial of " << n << " is " << fact << endl;
}

void power()
{
    cout << "Enter the number and exponent: ";
    double a, e;
    cin >> a >> e;
    double b = pow(a, e);
    cout << "The power of " << a << " raised to the exponent " << e << " is " << b << endl;
}

void square()
{
    cout << "Enter the number you want to know the square of: ";
    double a;
    cin >> a;
    double sqr = pow(a, 2);
    cout << "The square of " << a << " is " << sqr << endl;
}

void cube()
{
    cout << "Enter the number you want to know the cube of: ";
    double a;
    cin >> a;
    double cb = pow(a, 3);
    cout << "The cube of " << a << " is " << cb << endl;
}

void squareroot()
{
    cout << "Enter the number you want to know the square root of: ";
    double a;
    cin >> a;
    double sqrt_val = sqrt(a);
    cout << "The square root of " << a << " is " << sqrt_val << endl;
}
