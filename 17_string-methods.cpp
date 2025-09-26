#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.length() << "\n";
    std::cout << name.empty() << "\n";
    //name.clear();
    std::cout << name << "\n";
    name.append("@gmail.com");

    std::cout << name << "\n";

    name.insert(0, "$");

    std::cout << name.at(0) << "\n";
    std::cout << name.find(' ') << "\n";

    std::cout << name << "\n";
    name.erase(7, 1);
    std::cout << name << "\n";

    return 0;
}