#include <iostream>

// https://www.youtube.com/watch?v=bYEdLCWJeHA&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=23

int main()
{
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";
    
    return 0;
}