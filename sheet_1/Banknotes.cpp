#include <iostream>

int countBanknotes(int current, int banknote)
{
    int res = current % banknote;
    printf("%d nota(s) de R$ %d,00\n", (current - res) / banknote, banknote);
    return res;
}

int main()
{
    int n;
    std::cin >> n;
    const int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    std::cout << n << std::endl;
    for (int i = 0; i < 7; i++)
        n = countBanknotes(n, banknotes[i]);
    return 0;
}