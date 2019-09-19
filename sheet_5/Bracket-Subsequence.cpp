#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::string s;
    std::cin >> n >> k >> s;
    if (n == k)
    {
        std::cout << s << std::endl;
        return 0;
    }
    std::vector<char> tokens;
    int rounds = n - k;
    for (int i = 0; i < n; i++)
    {
        tokens.push_back(s[i]);
        if (s[i] == ')' && rounds > 0)
        {
            tokens.pop_back();
            tokens.pop_back();
            rounds -= 2;
        }
    }
    for (int i = 0, m = tokens.size(); i < m; i++)
        std::cout << tokens[i];
    printf("\n");
    return 0;
}