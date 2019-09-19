#include <iostream>
#include <algorithm>

int isGood(std::string num, std::string nums)
{
    std::sort(num.begin(), num.end());
    for (int i = 0, m = nums.length(); i < m; i++)
        if (num.find(nums[i]) == -1)
            return 0;
    return 1;
}

int main()
{
    int n, k, res = 0;
    std::cin >> n >> k;
    std::string num, NUMS = ((std::string) "0123456789").substr(0, k + 1);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        res += isGood(num, NUMS);
    }
    printf("%d\n", res);
    return 0;
}