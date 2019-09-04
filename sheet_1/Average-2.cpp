#include <iostream>

int main()
{
    float a, b, c;
    std::cin >> a >> b >> c;
    float res = 0.2 * a + 0.3 * b + 0.5 * c;
    printf("MEDIA = %0.1f\n", res);
    return 0;
}