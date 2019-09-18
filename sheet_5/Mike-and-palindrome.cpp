#include <iostream>

int main()
{
    std::string x;
    std::cin >> x;
    int res = 0;
    for (int i = 0, m = x.length(); i < m / 2; i++)
        if (x[i] != x[m - 1 - i])
            res++;
    if (res == 0)
        if (x.length() % 2 == 0)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    else if (res == 1)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}