#include <iostream>
#include <string>
#include <sstream>


std::string formatNumber(int);


int main()
{
    int number = 1000000;
    std::string output = formatNumber(number);
    std::cout << output << '\n';
}


std::string formatNumber(int number)
{
    std::ostringstream oss;
    oss << number;
    std::string numberString = oss.str();
    int length = numberString.length();
    int commaCount = (length - 1) / 3;
    for (int i = 1; i <= commaCount; i++) {
        int commaPosition = length - (i * 3);
        numberString.insert(commaPosition, ",");
    }
    return numberString;
}