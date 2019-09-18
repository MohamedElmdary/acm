#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>

int main()
{
    std::string name;
    std::cin >> name;
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    char nameArr[name.length() + 1];
    std::strcpy(nameArr, name.c_str());
    std::set<char> username(nameArr, nameArr + name.length());
    std::cout << (username.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << std::endl;
    return 0;
}