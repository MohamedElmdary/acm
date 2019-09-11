#include <iostream>
 
int main() {
    int n;
    std:: cin >> n;
    long int nums[n], res = 1, result = 1;;
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
        if (i > 0) {
            if (nums[i - 1] <= nums[i]) res += 1;
            else res = 1;
            if (result < res) result = res;
        }
    } 
    std:: cout << result << std::endl;
    return 0;
}