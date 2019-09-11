#include <iostream>

int abs(int a) { return a > 0 ? a : -a; }

int main()
{
    const int n = 5;
    int matrix[n][n];
    int position[2];
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            std::cin >> matrix[a][b];
            if (matrix[a][b] == 1) {
                position[0] = a;
                position[1] = b;
            }
        }
    }
    int x = abs(2 - position[0]);
    int y = abs(2 - position[1]);
    printf("%d\n", x + y);
    return 0;
}