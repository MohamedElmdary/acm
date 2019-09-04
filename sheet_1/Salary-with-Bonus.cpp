#include <iostream>

int main()
{
    std::string name;
    float salary, sales;
    std::cin >> name >> salary >> sales;
    printf("TOTAL = R$ %0.2f\n", salary + 0.15 * sales);
    return 0;
}