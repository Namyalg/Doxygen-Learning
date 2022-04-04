#include<iostream>
#include "head.h"
using namespace std;

/**
 * Brief for class A.
 * This class provides the variable A and its member function can be used on it
 * *********************/
class A{ //only public and protected are shown not private members/functions
    public:
    /**
     * integer member variable
     * ********/
    int a; 
    int b; /*!< an integer value */ //this will give the box with description at the bottom

    /**
     * Function returns the sum of 2 numbers
     * @param a member variable a
     * @param b member variable b
     * 
     * **************/
    void sum(){
        cout<<"Sum is " << add(a, b);
    }
};

/**
 * The main function
 * 
 * **********/
int main(){
    return 0;
}