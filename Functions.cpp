#include <iostream>
#include <cmath> //contains sqrt(144), max(5,2), min(5,2), round(6.2), pow(13,2)
using namespace std;

void printArray(int arr[], int size); //function prototype -tells the compiler beforehand, if a function exists
//if we don't define a function before calling it, it will give error. Hence, the function prototype
//it also tells the program about the type of the value returned by the function and the number and type of arguments.
void myFunc(int *x);

int Sum(int x, int y, int z=10){//however you can skip the function prototype, if you define the whole function before main
    return x+y+z;//x,y here are formal parameters, and z is a default parameter,it is used when z's corresponding argument is missing
 /*
 For a function to use arguments,it must declare formal parameters,
 Formal parameters behave within the function similarly to other local variables.
 They are created upon entering the function, and are destroyed upon exiting the function.
 */
}

/*
Function Overloading
----------------------

-It allows to create multiple functions of the same name.
- Ways to overload a function
    1. By Changing the number of arguments
    2. By Changing the data type.
-You can not overload function declarations that differ only by return type.
eg. int printName(int a){}
    void printName(int b){}
-Overloading makes a function available for more types than one.

*/
int Sum(float a=10, float b, float c){ //a is a default argument
    //Default parameters are defined to the rightmost side of the parameter list
    return a+b+c;//now the same function Sum(), will work for both integers and floats.
}




int main(){
    int a=10; 
    int b=5; //actual parameters
    int c=Sum(a,b);//passing a,b as arguments, which is then assigned to the formal parameter of the function
 //  you can assign the returned value to a variable, or print it directly
    cout<<Sum(5,6)<<endl;
    int myArr[3]={42,33,88};
    myFunc(&b);//changes b to 100
    cout<<b<<endl;
    cout<<min(a,b); //inbuilt or library functions
    printArray(myArr,3);//specify array's name without [], when passing it as an argument
    return 0;
}

// Passing Arrays as arguments
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

}
/*
Pass by value, passes a copy of the variable as argument.
Making the actual variable unaccessible. It is used by default in C++

Pass by reference, copies the argument's address into the formal parameters.
This means that changes made to the parameter affect the argument.

-To pass the value by reference,
 pointers are passed to the functions
 just like any other value.
-Advantages of Pass by reference:
   1. Reduction in-memory storage.
   2. Changes can be reflected easily
*/
void myFunc(int *x){
    /*The function declaration says that,
    the function takes a pointer as its parameter by defining with *
    */
    *x=100; //updates the real variable
}

/*
In general, passing by value is faster and more effective
Than Pass by reference where your function needs to modify the argument,
or when you need to pass a data type, that uses a lot of memory and is expensive to copy.
*/

/*MISC
----------
stringname.length(); ==returns len of string
stringname.size();      "     "     "
// Converting to uppercase using toupper()
    string a = "Coding Ninjas";
    for (int i = 0; i < a.length(); i++)
        putchar(toupper(a[i]));
    return 0;
*/