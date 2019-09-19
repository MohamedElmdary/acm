#include <iostream>
#include <algorithm>

int main()
{
    int len;
    std::string word;
    std::cin >> len >> word;
    std::sort(word.begin(), word.end());
    int zeros = 0;
    for (int i = 0; i < len; i++)
        if (word[i] == '0')
            zeros++;
        else
            break;
    int ones = len - zeros;
    std::cout << std::abs(zeros - ones) << std::endl;
    return 0;
}