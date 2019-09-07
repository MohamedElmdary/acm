#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;
    int result = m / 2 * n;
    if (m % 2 != 0 && n > 1)
        result += n / 2;
    std::cout << result << std::endl;
    return 0;
}