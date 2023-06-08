#include <iostream>


int count(const std::string&);


int main()
{
    int output = count("ho-tel");
    int output2 = count("cat");
    int output3 = count("met-a-phor");
    int output4 = count("ter-min-a-tor");
    std::cout << output << " " << output2 << " " << output3 << " " << output4;
}


int count(const std::string& str) {
    int syllables = 1;
    for(char c: str) {
        if(c == '-')
            syllables++;
    }
    return syllables;
}