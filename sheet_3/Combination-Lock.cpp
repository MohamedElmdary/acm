#include <iostream>

int main()
{
    int a, res = 0;
    std::string b, c;
    std::cin >> a >> b >> c;
    int l1 = c.length(),
        l2 = b.length();
    while (l1 > 0 || l2 > 0)
    {
        int b1 = b[l1 - 1] - '0',
            c1 = c[l2 - 1] - '0';
        int r = b1 > c1 ? b1 - c1 : c1 - b1;
        res += r > 5 ? 10 - r : r;
        b = b.substr(0, b.size() - 1);
        c = c.substr(0, c.size() - 1);
        --l1;
        --l2;
    }
    printf("%d\n", res);
    return 0;
}