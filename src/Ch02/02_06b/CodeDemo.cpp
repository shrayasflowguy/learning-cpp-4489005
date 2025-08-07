// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>
#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    int8_t small= 8;
#ifdef DEBUG
    std::cout << "debugging" << std::endl;
#endif
    large += small;
    std::cout<< "large = " << large << std::endl;
    std::cout << std::endl << std::endl;

    return (0);
}
