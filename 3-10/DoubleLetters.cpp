#include <iostream>


bool doubleLetters(std::string);


int main()
{
    bool output = doubleLetters("hello");
    bool output2 = doubleLetters("hey");
    std::cout << output << " " << output2;
}


bool doubleLetters(std::string str) {
    for(int i = 1; i < str.size(); i++) {
        if(str[i] == str[i-1])
            return true;
    }
    return false;
}