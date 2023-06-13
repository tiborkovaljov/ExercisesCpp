#include <iostream>
#include <tuple>


std::tuple<int, int> up_down(int number);


int main()
{
    std::tuple<int, int> result = up_down(5);
    std::cout << std::get<0>(result) << ", " << std::get<1>(result) << '\n';
}


std::tuple<int, int> up_down(int number)
{
    int lower = number - 1;
    int higher = number + 1;
    return std::make_tuple(lower, higher);
}