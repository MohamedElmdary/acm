#include <iostream>
#include <vector>

int main()
{
    int a, b, res = 0;
    std::cin >> a >> b;
    std::vector<int> problems;
    for (int i = 0; i < a; i++)
    {
        int temp;
        std::cin >> temp;
        problems.push_back(temp);
    }

    for (int i = 0; i < a; i++)
        if (problems.front() <= b)
        {
            res++;
            problems.erase(problems.begin());
        }
        else if (problems.back() <= b)
        {
            res++;
            problems.pop_back();
        }
        else
            break;
    printf("%d\n", res);
    return 0;
}