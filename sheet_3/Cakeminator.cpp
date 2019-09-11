#include <iostream>
#include <vector>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::string cake[a];
    for (int x = 0; x < a; x++)
        std::cin >> cake[x];
    int res = 0;
    // check rows
    for (int i = 0; i < a; i++)
        for (int x = 0; x < b; x++)
        {
            if (cake[i][x] == 'S') break;
            if (x + 1 == b)
            {
                res += b;
                for (int q = 0; q < b; q++)
                    cake[i][q] = 'X';
            }
        }
    // check cols
    for (int i = 0; i < b; i++)
    {
        int xs = 0;
        for (int x = 0; x < a; x++)
        {
            if (cake[x][i] == 'S') break;
            if (cake[x][i] == 'X') ++xs;
            if (x + 1 == a) res += (a - xs);
        }
    }
    printf("%d\n", res);
    return 0;
}