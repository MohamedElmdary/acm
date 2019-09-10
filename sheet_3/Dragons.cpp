#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int s, n;
    std::cin >> s >> n;
    std::vector<std::pair<int, int> > dragons;
    for (int i = 0; i < n; i++)
    {
        int t1, t2;
        std::cin >> t1 >> t2;
        dragons.push_back(std::make_pair(t1, t2));
    }
    std::sort(dragons.begin(), dragons.end());
    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
            continue;
        }
        std::cout << "NO\n";
        return 0;
    }
    std::cout << "YES\n";
    return 0;
}
