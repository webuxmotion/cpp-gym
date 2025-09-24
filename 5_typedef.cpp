#include <iostream>
#include <vector>
// https://www.youtube.com/watch?v=7TJ7Z1-V_24&list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on&index=5

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef int number_t;
using text_t = std::string; // the same as: typedef std::string text_t;

int main()
{
    pairlist_t pairlist;
    text_t firstName = "Andrii";
    number_t age = 34;

    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}