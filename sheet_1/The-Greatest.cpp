#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::max(a, std::max(b, c)) << " eh o maior" << std::endl;
    return 0;
}