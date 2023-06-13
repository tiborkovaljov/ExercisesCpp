#include <iostream>
#include <vector>
#include <algorithm>


int largestDifference(const std::vector<int>&);


int main()
{
    std::vector<int> assignment = {2, 1, 14, 3, 6, 21};
    int output = largestDifference(assignment);
    std::cout << output;
}


int largestDifference(const std::vector<int>& nums) {
    std::vector<int> numbers = nums;
    auto minElement = std::min_element(numbers.begin(), numbers.end());
    int min = *minElement;
    auto maxElement = std::max_element(numbers.begin(), numbers.end());
    int max = *maxElement;
    return max - min;
}