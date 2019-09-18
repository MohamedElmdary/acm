#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;
    for (int i = n.length() - 1; i >= 0; i--)
        n += n[i];
    std::cout << n << std::endl;
    return 0;
}