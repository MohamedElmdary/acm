#include <iostream>

int main()
{
    int n, xi, yi, zi, x = 0, y = 0, z = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    std::cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << std::endl;
    return 0;
}