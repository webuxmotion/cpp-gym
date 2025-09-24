#include <iostream>

// https://www.youtube.com/watch?v=imiIhu9u670&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=8

int main()
{
    std::string name;
    int age;

    std::cout << "What's you age?: ";
    std::cin >> age;

    std::cout << "What's you full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old!\n";

    return 0;
}