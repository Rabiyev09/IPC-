#include <iostream>
int main()
{
    int dayOfWeek = 0;

    std::cout << "Enter a number (1-7): ";
    std::cin >> dayOfWeek;


    if (dayOfWeek == 1) {
        std::cout << "It is Monday\n";
    }
    else if (dayOfWeek == 2) {
        std::cout << "It is Tuesday\n";
    }
    else if (dayOfWeek == 3) {
        std::cout << "It is Wednesday\n";
    }
    else if (dayOfWeek == 4) {
        std::cout << "It is Thursday\n";
    }
    else if (dayOfWeek == 5) {
        std::cout << "It is Friday\n";
    }
    else if (dayOfWeek == 6) {
        std::cout << "It is Saturday\n";
    }
    else if (dayOfWeek == 7) {
        std::cout << "It is Sunday\n";
    }
    else {
        std::cout << "Please enter a number (1-7)\n";
    }

    return 0;
}