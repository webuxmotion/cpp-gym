#include <iostream>

// https://www.youtube.com/watch?v=4psGUiKacPQ&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=2

int main()
{
    std::cout << "======= integer =======" << "\n";
    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";

    int age = 21;
    int year = 2026;
    int days = 7;

    std::cout << days << "\n";

    std::cout << "======= double =======" << "\n";
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << temperature << "\n";

    std::cout << "======= single character =======" << "\n";
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << currency << "\n";

    std::cout << "======= boolean =======" << "\n";
    bool student = false;
    bool power = false;
    std::cout << (power == student) << "\n";

    std::cout << "======= string =======" << "\n";
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << address << "\n";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old\n";

    return 0;
}