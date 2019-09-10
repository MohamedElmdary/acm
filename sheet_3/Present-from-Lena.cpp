#include <iostream>

void render(int i, int n) {
    for (int a = i; a < n; a++) printf("  ");
    for (int a = 0; a < i + 1; a++) printf("%d%s", a, i - 1 == -1 ? "" : " ");
    for (int a = i - 1; a >= 0; a--) printf("%d%s", a, a == 0 ? "": " ");
    printf("\n");
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n + 1; i++) render(i, n);
    for (int i = n - 1; i >= 0; i--) render(i, n);
    return 0;
}