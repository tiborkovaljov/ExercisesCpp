#include <iostream>
#include <tuple>


std::tuple<int, int> getRowCol(std::string);


int main()
{
    std::string in;
    std::cout << "Enter the position (A3, like so): ";
    std::cin >> in;

    std::tuple<int, int> position = getRowCol(in);

    int row = std::get<0>(position);
    int col = std::get<1>(position);

    std::cout << row << " " << col << '\n';
}


std::tuple<int, int> getRowCol(std::string in)
{
    int row;
    int col;
    col = in[0] - 'A';
    row = in[1] - '1';
    return std::make_tuple(row, col);
}