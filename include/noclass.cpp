#ifndef iostream

#include<iostream>
/** @file
 * This file does not have a class.
 * 
 * Checking how files without a class are shown on Doxygen
 * 
 * ******************/

/** @brief Prints the sum of 2 numbers.
 *
 *  The addition operation of 2 numbers is perfomed here
 *  Integer arguments are read and shown as required
 *
 *  @param a First number
 *  @param b Second number
 *  @note only performs addition here this thingy
 *  @return The sum
 */

int sum(int a, int b){
    return a + b;
}

/**
 * @brief The driver function.
 * 
 * The main function present here is where all the magic happens
 * 
 * *****************/

int main(){
    std::cout << sum(3, 4) << "\n";
    return 0;
}

#endif