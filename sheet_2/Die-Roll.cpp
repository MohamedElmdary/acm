#include <iostream>

std::string dieRoll(int r)
{
    switch (r)
    {
        case 0: return "0/1"; // cannot happen !
        case 1: return "1/6";
        case 2: return "1/3";
        case 3: return "1/2";
        case 4: return "2/3";
        case 5: return "5/6";
        case 6: return "1/1";
    }
}

int main()
{
    int y, w;
    std::cin >> y >> w;
    int res = 7 - std::max(y, w);
    std::cout << dieRoll(res) << std::endl;
    return 0;
}