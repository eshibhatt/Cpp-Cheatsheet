#include <iostream>
using namespace std;

int main(){
    int score=5;
    cout<<&score<<endl; //Address-of operator(&) returns the memory address, of where the variable is stored
    /*
       - a pointer is a variable which stores address of other variables.
       - as pointers are variables, they too must be declared before use.
       general declaration= <datatype> *<pointer_name>= &variable_name;
       - * here only indicates that the declared variable is a pointer.
       It has no place in its identifier.
       - *scorePtr = score; they both represent the same value.
    */
    int *scorePtr;
    scorePtr=&score;
    cout<<*scorePtr; //Contents-of operator(*) returns the value stored in the address

}
/* Notes-
1. Only addition and subtraction operations are allowed; the others aren’t allowed on pointers.
2.when adding one to a pointer, the pointer is made to point to the following element of the same type,
and, therefore, the size in bytes of the type it points to is added to the pointer.

Dangling Pointers:A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted).
free(scorePtr);

Typecasting: Means assigning one type of data to another type, like storing an integer value to a char data type.
eg: i) implicit typecasting : as the compiler itself interprets the conversion of integer value to ASCII character value.
    int x=65;
    char c= x;

eg: ii) explicit typecasting : User defined typecasting
int i = 65; 
int *p = &i;
char *pc = (char*) p;

#char *pc = p;will give an error as we are trying to store an integer-type pointer value into a character-type value. 
*/