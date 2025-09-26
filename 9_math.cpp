#include <iostream>
#include <cmath>

int main()
{
    double x = 3.99;
    double y = 3.0002;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 8);
    z = sqrt(256);
    z = abs(-z);
    z = round(y);
    z = ceil(y);
    z = floor(x);

    std::cout << z << "\n";

    return 0;
    
}