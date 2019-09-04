#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int s = a % 60;
    int ms = (a - s) / 60;
    int m = ms % 60;
    int h = (ms - m) / 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}