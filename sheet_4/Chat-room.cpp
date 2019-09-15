#include <iostream>

std::string findChar(std::string word, int current = 0)
{
    char hello[] = {'h', 'e', 'l', 'l', 'o'};
    int r = word.find(hello[current]);
    if (r == -1)
        return "NO";
    if (r != -1 && current == 4)
        return "YES";
    return findChar(word.substr(r + 1, word.length()), ++current);
}

int main()
{
    std::string word;
    std::cin >> word;
    std::cout << findChar(word) << std::endl;
    return 0;
}