/* Typecasting- Converting datatypes
1. Implicit Type Conversion
It is automatically performed by the compiler itself to ensure that 
the calculations between the same data types take place and avoid any loss of data.

*/
#include <iostream>
using namespace std;

int main() {
    int number = 200;
    char letter = 'c';
    float dec = 0.7;
    double dbl=5.6;
    int res=(int)dbl+10; // Here dbl is explicity converted to int, and its value becomes 5
    int res1 = number + letter; // here letter is implicitly converted to int and its value is the             
    //  ASCII value of ‘c’ i.e. 99
    cout << res1 << " ";
    float res2 = res1 + dec; // here res1 is implicitly converted to float.
    cout << res2;
}