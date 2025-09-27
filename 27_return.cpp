#include <iostream>

double square(double length);
double cube(double length);
std::string concatStrings(std::string string1, std::string string2);

int main()
{
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Andrii";
    std::string lastName = "Pereverziev";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    std::cout << "Hello " << fullName << "\n";

    return 0;
}

double square(double length)
{
    double result = length * length;

    return result;
}

double cube(double length)
{
    double result = length * length * length;

    return result;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}