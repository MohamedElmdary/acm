#include <iostream>

int main()
{
    const float prices[] = {4, 4.5, 5, 2, 1.5};
    int a, b;
    std::cin >> a >> b;
    printf("Total: R$ %0.2f\n", (float)prices[a - 1] * b);
    return 0;
}