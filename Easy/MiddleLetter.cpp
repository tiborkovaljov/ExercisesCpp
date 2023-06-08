#include <iostream>
#include <string>


std::string mid(const std::string& in);


int main()
{
    std::string output = mid("ac");
    std::cout << output;
}


std::string mid(const std::string& str) {
    std::string result;
    int length = str.length();
    if (length % 2 == 1 && length > 0) {
        int middleIndex = length / 2;
        result = str.substr(middleIndex, 1);
        return result;
    }
    else {
        return "";
    }
}