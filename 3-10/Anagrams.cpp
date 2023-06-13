#include <iostream>
#include <string>
#include <algorithm>


bool isAnagram(const std::string&, const std::string&);


int main()
{
    bool output = isAnagram("typhoon", "opython");
    bool output2 = isAnagram("Alice", "Bob");
    std::cout << output << " " << output2;
}


bool isAnagram(const std::string& str, const std::string& str2) {
    std::string sorted = str;
    std::string sorted2 = str2;
    std::sort(sorted.begin(), sorted.end());
    std::sort(sorted2.begin(), sorted2.end());
    if(sorted == sorted2) {
        return true;
    }
    return false;
}