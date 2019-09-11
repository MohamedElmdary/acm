#include <iostream>

std::string line(int l, std::string s)
{
    std::string ln = "";
    for (int i = 0; i < l; i++)
        ln += s;
    return ln;
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << line(m, "#") << std::endl;
            continue;
        }
        std::string res = line(m - 1, ".");
        std::cout << (x++ % 2 == 0 ? res + "#" : "#" + res) << std::endl;
    }
    return 0;
}