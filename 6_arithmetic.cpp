#include <iostream>

int main()
{
    int students = 20;

    students++;
    students -= 2;
    students--;
    students = students * 2;
    students /= 2;
    students += 2;

    int remainder = students % 3;

    std::cout << students << "\n";
    std::cout << remainder << "\n";

    int melons = 6 - (5 + 4) * 3 / 2;

    std::cout << melons << "\n";

    return 0;
}