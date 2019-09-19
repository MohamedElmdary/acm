#include <iostream>

int main()
{
    int n, num;
    std::cin >> n;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        res[num - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", res[i]);

    return 0;
}