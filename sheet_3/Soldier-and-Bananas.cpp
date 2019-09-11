#include <iostream>

int main()
{
    long int n;
    int k, w;
    std::cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        n -= i * k;
    printf("%d\n", n > 0 ? 0 : -n);
    return 0;
}