#include <iostream>

// https://www.youtube.com/watch?v=a4P4ial8OgQ&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=34

int main()
{
    std::string students[] = {"Andrii", "Danylo", "Daryna"};

    // std::cout << students[0] << "\n";
    // std::cout << students[1] << "\n";
    // std::cout << students[2] << "\n";

    int arrSize = sizeof(students) / sizeof(std::string);

    for (int i = 0; i < arrSize; i++)
    {
        std::cout << students[i] << "\n";
    }

    return 0;
}