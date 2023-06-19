#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> convert(std::vector<int>);


int main()
{
    std::vector<int> sample = {1, 2, 3};
    std::vector<std::string> output = convert(sample);
    for(const auto& string: output)
    {
        std::cout << string << " " << '\n';
    }
}


std::vector<std::string> convert(std::vector<int> numbers)
{
    std::vector<std::string> converted = {};
    for(int num: numbers)
    {
        converted.push_back(std::to_string(num));
    }
    return converted;
}