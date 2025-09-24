#include <iostream>

// https://www.youtube.com/watch?v=Fj9HjbqHto8&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=7
/*
Implicit = automatic
Explicit
*/
int main()
{
    double x = (int)3.14;

    std::cout << x << "\n";

    char y = 100;

    std::cout << y << "\n";

    std::cout << (char)101 << "\n";

    int correct = 8;
    int questions = 10;

    double score = (double)correct / questions * 100;

    std::cout << "=== score ===" << "\n";
    std::cout << score << "%\n";

    return 0;
}