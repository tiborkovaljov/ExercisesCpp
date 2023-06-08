#include <iostream>
#include <string>


std::string addDots(const std::string& str);
std::string removeDots(const std::string& str);


int main()
{
    std::string text = "test";
    std::string output = addDots(text);
    std::string output2 = removeDots(output);

    std::cout << "String with dots added: " << output << std::endl;
    std::cout << "String with dots removed: " << output2 << std::endl;
}


std::string addDots(const std::string& str) {
    std::string dotted;
    for(size_t i = 0; i < str.size(); ++i) {
        dotted += str[i];
        if(i < str.size() - 1) {
            dotted += '.';
        }
    }
    return dotted;
}


std::string removeDots(const std::string& str) {
    std::string undotted;
    for(char c : str) {
        if(c != '.') {
            undotted += c;
        }
    }
    return undotted;
}