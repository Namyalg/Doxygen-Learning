#include<iostream>
using namespace std;

/** Brief description.
 *         
 *  Detailed description starts here.
 */
class hello{
    int h;
    /**
     * This is the constructor
     * Takes a single parameter
     * 
     * @param l The value supplied to the constructor
     * @note assigned to the constructor
     * ************************************************/
    public:
    hello(int l)  
    { 
        h = l;
    }

    /**
     * A public getter function 
     * 
     * @note prints the value of member h
     * ****************************/
    void geth(){
        cout<<"h is "<<h;
    }
};

// /**
//  * This class is used to test.
//  * 
//  * The main purpose of this class is to create test cases and test the contents
//  * ************/

// class Test
// {
//   public:
//     /** An enum type. 
//      *  The documentation block cannot be put after the enum! , this gives a table here
//      */
//     enum EnumType
//     {
//       int EVal1,     /**< enum value 1 */
//       int EVal2      /**< enum value 2 */
//     };
//     void member();   //!< a member function.
    
//   protected:
//     int value;       /*!< an integer value */
// };

int main(){
    hello he(3);
    he.geth();
    return 0;
}