#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
        std::cin >> c[i];
    int p = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (p == 0)
        {
            if (c[i] == -1)
                res++;
        }
        else
        {
            if (c[i] == -1)
                p -= 1;
        }

        if (c[i] != -1)
            p += c[i];
    }
    printf("%d\n", res);
    return 0;
}