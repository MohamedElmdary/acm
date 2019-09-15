#include <iostream>

int main()
{
    int n, k, result = 0;
    std::cin >> n >> k;
    int marks[n];
    for (int i = 0; i < n; i++)
        std::cin >> marks[i];
    int selectedNumber = marks[k - 1] == 0 ? 1 : marks[k - 1];
    for (int i = 0; i < n; i++)
        if (marks[i] >= selectedNumber)
            result += 1;
    std::cout << result << std::endl;
    return 0;
}