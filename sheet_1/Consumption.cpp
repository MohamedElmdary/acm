#include <iostream>

int main()
{
    int a;
    float b;
    std::cin >> a >> b;
    printf("%0.3f km/l\n", a / b);
    return 0;
}