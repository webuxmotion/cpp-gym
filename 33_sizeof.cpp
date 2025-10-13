#include <iostream>

// https://www.youtube.com/watch?v=1_YDHY_34Bg&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=33

int main()
{
    double gpa = 2.5;
    std::string name = "Andrii Pereverziev is a good programmer";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements in array\n";

    std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements in array\n";
    
    return 0;
}