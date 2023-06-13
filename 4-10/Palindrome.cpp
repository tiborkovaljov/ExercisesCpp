#include <iostream>
#include <vector>
#include <algorithm>


bool palindrome(std::string);


int main()
{
    std::string output = "bob";
    std::string output2 = "andrea";
    std::cout << palindrome(output) << " " << palindrome(output2);
}


bool palindrome(std::string in)
{
    std::vector<char> sample1;
    std::vector<char> sample2;
    for(int i = 0; i < in.size(); i++)
    {
        sample1.push_back(in[i]);
    }
    sample2 = sample1;
    std::reverse(sample2.begin(), sample2.end());
    if(sample1 == sample2)
    {
        return true;
    }
    else
    {
        return false;
    }
}