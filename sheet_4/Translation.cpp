#include <iostream>
#include <algorithm>

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    std::reverse(s.begin(), s.end());
    std::cout << (s == t ? "YES" : "NO") << std::endl;
    return 0;
}