#include <iostream>

int main()
{
    std::string x;
    std::cin >> x;
    int res = 1;
    char lastCheck = x[0];
    for (int i = 1, m = x.length(); i < m; i++)
    {
        if (x[i] == lastCheck)
            res += 1;
        else
        {
            lastCheck = x[i];
            res = 1;
        }
        if (res == 7)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}