#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
 
std::vector<int> common_digits(const std::vector<int>& nums) {
    std::set<int> digit_set;
    for (int num : nums) {
        while (num > 0) {
            digit_set.insert(num % 10);
            num /= 10;
        }
    }
    return std::vector<int>(digit_set.begin(), digit_set.end());
}
 
int main() {
    std::vector<int> nums1 = {131, 11, 48};
    std::vector<int> result1 = common_digits(nums1);
    for (int digit : result1) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;  // Output: 1 3 4 8
 
    std::vector<int> nums2 = {111, 222, 333, 4444, 666};
    std::vector<int> result2 = common_digits(nums2);
    for (int digit : result2) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;  // Output: 1 2 3 4 6
 
    return 0;
}