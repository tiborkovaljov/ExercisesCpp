#include <iostream>
#include <vector>
#include <tuple>


std::vector<std::tuple<int, int>> zap(const std::vector<int>, const std::vector<int>);


int main()
{
    std::vector<int> sample1 = {0, 1, 2, 3};
    std::vector<int> sample2 = {5, 6, 7, 8};
    std::vector<std::tuple<int, int>> zipped = zap(sample1, sample2);
    for(const auto& num: zipped)
    {
        std::cout << "(" << std::get<0>(num) << ", " << std::get<1>(num) << ")" << '\n';
    }
}


std::vector<std::tuple<int, int>> zap(const std::vector<int> a, const std::vector<int> b)
{
    std::vector<std::tuple<int, int>> result = {};
    for(int i = 0; i < a.size(); i++)
    {
        result.push_back(std::make_tuple(a[i], b[i]));
    }
    return result;
}