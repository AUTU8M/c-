#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> indexByValue;

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int needed = target - nums[i];
        auto it = indexByValue.find(needed);

        if (it != indexByValue.end()) {
            return {it->second, i};
        }

        indexByValue[nums[i]] = i;
    }

    return {};
}

int main() {
    std::vector<int> nums{2, 7, 11, 15};
    int target = 9;

    std::vector<int> answer = twoSum(nums, target);
    if (answer.empty()) {
        std::cout << "No pair found\n";
    } else {
        std::cout << "Indices: " << answer[0] << ", " << answer[1] << '\n';
    }

    return 0;
}
