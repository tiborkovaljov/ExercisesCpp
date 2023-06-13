#include <iostream>
#include <type_traits>


template<typename T1, typename T2>


bool only_ints(const T1& param1, const T2& param2) {
    return std::is_same_v<T1, int> && std::is_same_v<T2, int>;
}


int main() {
    std::cout << std::boolalpha;
    std::cout << only_ints(1, 2) << std::endl;      // Output: true
    std::cout << only_ints("a", 1) << std::endl;    // Output: false
}