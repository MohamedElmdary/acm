#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int values[] =
        {a + b * c, a * (b + c), a * b * c, (a + b) * c, a + b + c};
    std::cout << *std::max_element(values, values + 5) << std::endl;
    return 0;
}