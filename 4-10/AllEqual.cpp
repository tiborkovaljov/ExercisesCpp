#include <iostream>
#include <vector>


bool allEqual(std::vector<char>);


int main()
{
    std::vector<char> elements = {'l', 'l', 'l'};
    bool output = allEqual(elements);
    std::cout << output;
}


bool allEqual(std::vector<char> elements)
{
    int firstElement = elements[0];
    for (int i = 1; i < elements.size(); ++i)
    {
        if (elements[i] != firstElement)
        {
            return false;
        }
    }
    return true;
}