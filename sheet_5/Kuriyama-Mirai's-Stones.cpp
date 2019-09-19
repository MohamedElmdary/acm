#include <iostream>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n;
    long int v[n], u[n];
    long long int sum_v[n], sum_u[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
        u[i] = v[i];
    }
    std::sort(u, u + n);
    sum_v[0] = v[0], sum_u[0] = u[0];
    for (int i = 1; i < n; i++)
    {
        sum_v[i] = v[i] + sum_v[i - 1];
        sum_u[i] = u[i] + sum_u[i - 1];
    }
    std::cin >> m;
    int t, l, r;
    for (int i = 0; i < m; i++)
    {
        std::cin >> t >> l >> r;
        --l, --r;
        if (t == 1)
        {
            std::cout << sum_v[r] - sum_v[l] + v[l] << std::endl;
        }
        else
        {
            std::cout << sum_u[r] - sum_u[l] + u[l] << std::endl;
        }
    }

    return 0;
}