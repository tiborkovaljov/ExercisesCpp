#include <iostream>
#include <vector>


std::vector<int> flatten(const std::vector<std::vector<int>>&);


int main()
{
    std::vector<std::vector<int>> assignment = {{1, 2}, {3, 4}};
    std::vector<int> output = flatten(assignment);

    for(int num: output) {
        std::cout << num << " ";
    }
}


std::vector<int> flatten(const std::vector<std::vector<int>>& nestedList) {
    std::vector<int> flattenedList;
    for (const auto& sublist : nestedList) {
        flattenedList.insert(flattenedList.end(), sublist.begin(), sublist.end());
    }
    return flattenedList;
}