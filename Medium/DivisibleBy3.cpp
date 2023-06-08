#include <iostream>


bool divisibleByThree(const int&);


int main()
{
    int output = divisibleByThree(6);
    int output2 = divisibleByThree(5);
    std::cout << output << " " << output2;
}


bool divisibleByThree(const int& num) {
    if(num % 3 == 0)
        return true;
    return false;
}