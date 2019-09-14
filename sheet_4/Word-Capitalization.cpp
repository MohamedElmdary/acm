#include <iostream>

int main()
{
    std::string x;
    std::cin >> x;
    x[0] = toupper(x[0]);
    std::cout << x << std::endl;
    return 0;
}