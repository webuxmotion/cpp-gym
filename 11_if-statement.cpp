#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";

    std::cin >> age;

    // std::cout << age;

    if (age >= 18)
    {
        std::cout << "Welcome to the site!" << "\n";
    }
    else if (age < 0)
    {
        std::cout << "You haven't been born yet!";
    }
    else
    {
        std::cout << "You are not old enough to enter";
    }

    return 0;
}