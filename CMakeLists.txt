cmake_minimum_required(VERSION 3.25)
project(cpp_principles)

set(CMAKE_CXX_STANDARD 17)

add_executable(capital_indexes Easy/CapitalIndexes.cpp)
add_executable(middle_letter Easy/MiddleLetter.cpp)
add_executable(online_status Easy/OnlineStatus.cpp)
add_executable(randomness Easy/Randomness.cpp)
add_executable(type_check Easy/TypeCheck.cpp)

add_executable(double_letters Medium/DoubleLetters.cpp)
add_executable(adding_removing_dots Medium/AddingRemovingDots.cpp)
add_executable(counting_syllables Medium/CountingSyllables.cpp)
add_executable(anagrams Medium/Anagrams.cpp)
add_executable(flatten_a_list Medium/FlattenAList.cpp)
add_executable(min_maxing Medium/MinMaxing.cpp)
add_executable(divisible_by_3 Medium/DivisibleBy3.cpp)