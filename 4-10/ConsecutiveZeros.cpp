#include <iostream>


int consecutiveZeros(std::string);


int main()
{
    int output = consecutiveZeros("1001101000110000");
    std::cout << output;
}


int consecutiveZeros(std::string in)
{
    int max_zeros = 0;
    int current_zeros = 0;
    for(char digit : in)
    {
        if(digit == '0')
        {
            current_zeros++;
            max_zeros = std::max(max_zeros, current_zeros);
        }
        else
        {
            current_zeros = 0;
        }
    }
    return max_zeros;
}