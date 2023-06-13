cmake_minimum_required(VERSION 3.25)
project(cpp_principles)

set(CMAKE_CXX_STANDARD 17)

add_executable(capital_indexes 2-10/CapitalIndexes.cpp)
add_executable(middle_letter 2-10/MiddleLetter.cpp)
add_executable(online_status 2-10/OnlineStatus.cpp)
add_executable(randomness 2-10/Randomness.cpp)
add_executable(type_check 2-10/TypeCheck.cpp)

add_executable(double_letters 3-10/DoubleLetters.cpp)
add_executable(adding_removing_dots 3-10/AddingRemovingDots.cpp)
add_executable(counting_syllables 3-10/CountingSyllables.cpp)
add_executable(anagrams 3-10/Anagrams.cpp)
add_executable(flatten_a_list 3-10/FlattenAList.cpp)
add_executable(min_maxing 3-10/MinMaxing.cpp)
add_executable(divisible_by_3 3-10/DivisibleBy3.cpp)

add_executable(tictactoe_input 4-10/TicTacToeInput.cpp)
add_executable(palindrome 4-10/Palindrome.cpp)
add_executable(up_and_down 4-10/UpAndDown.cpp)
add_executable(consecutive_zeros 4-10/ConsecutiveZeros.cpp)
add_executable(all_equal 4-10/AllEqual.cpp)