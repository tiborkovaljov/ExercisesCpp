#include <iostream>
#include <random>


int randomNumber();


int main()
{
    int output = randomNumber();
    std::cout << output;
}


int randomNumber() {
    std::random_device random_generator;
    std::mt19937 generator(random_generator());
    std::uniform_int_distribution<int> distribution(1, 100);
    int randomNum = distribution(generator);
    return randomNum;
}