#include <iostream>
int main()
{
    double a, b;
    char op;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Choose operator: (+ - * /)";
    std::cin >> op;

    if (op == '+')
    {
        std::cout << "Sum: " << a + b << "\n";
    }
    else if (op == '-')
    {
        std::cout << "Subtract: " << a - b << "\n";
    }
    else if (op == '*')
    {
        std::cout << "Multiply: " << a * b << "\n";
    }
    else if (op == '/')
    {
        std::cout << "Divide: " << a / b << "\n";
    }
    else
    {
        std::cout << "Unknown" << std::endl;
    }
    return 0;
}