#include <iostream>

int main()
{
    long long int n, k;
    std::cin >> n >> k;
    long long int mid = n / 2 + n % 2;
    if (k > mid)
    {
        long long int p = k - mid;
        std::cout << 2 * p << std::endl;
    }
    else
    {
        std::cout << 2 * k - 1 << std::endl;
    }
    return 0;
}