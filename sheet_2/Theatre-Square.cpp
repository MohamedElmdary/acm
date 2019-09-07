#include <iostream>
#include <cmath>

int main()
{
    long double n, m, a;
    std::cin >> n >> m >> a;
    long long int res = ceil(m / a) * ceil(n / a);
    std::cout << res << std::endl;
    return 0;
}