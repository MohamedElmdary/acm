#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>

int main()
{
    int x;
    std::string w;
    std::cin >> x >> w;
    std::transform(w.begin(), w.end(), w.begin(), ::tolower);
    char cstr[x + 1];
    std::strcpy(cstr, w.c_str());
    std::set<char> mySet(cstr, cstr + x);
    std::cout << (mySet.size() == 26 ? "YES" : "NO") << std::endl;
    return 0;
}