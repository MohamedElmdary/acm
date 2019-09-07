#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int values[] = {
        abs(a - b) + abs(a - c),
        abs(b - a) + abs(b - c),
        abs(c - a) + abs(c - b)};
    std::cout << *std::min_element(values, values + 3) << std::endl;
    return 0;
}