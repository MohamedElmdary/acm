#include <iostream>

int main()
{
    long long int n, k;
    std::cin >> n >> k;
    std::cout << ((n / k) % 2 == 0 ? "NO" : "YES") << std::endl;
    return 0;
}