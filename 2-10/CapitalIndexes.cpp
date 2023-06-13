#include <iostream>
#include <vector>


std::vector<int> capitalLetters(const std::string&);


int main()
{
    std::vector<int> output = capitalLetters("HeLlO");
    for(int i: output) {
        std::cout << i << '\n';
    }
}


std::vector<int> capitalLetters(const std::string& str) {
    std::vector<int> indexes = {};
    for(int i = 0; i < str.size(); ++i) {
        if(isupper(str[i])) {
            indexes.push_back(i);
        }
     }
    return indexes;
}