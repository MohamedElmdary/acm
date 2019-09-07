#include <iostream>

int main()
{
    long int a, b, s;
    std::cin >> a >> b >> s;
    const long int len = abs(a) + abs(b);
    if (s < len)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }
    long int r = s - len;
    std::cout << (r % 2 == 0 ? "YES" : "NO") << std::endl;
    return 0;
}