#include <iostream>
#define WUB "WUB"

std::string removeWUB(std::string word)
{
    int i = word.find(WUB);
    if (i == -1)
        return word;
    bool bar = i == 0 || word[i - 1] == ' ' || i == word.length() - 3;
    return removeWUB(word.substr(0, i) + (bar ? "" : " ") + word.substr(i + 3, word.length()));
}

int main()
{
    std::string w;
    std::cin >> w;
    std::cout << removeWUB(w) << std::endl;
    return 0;
}