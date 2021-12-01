/* Unary operators
--------------------------------------------------------------------------------------------
increment operators
--------------------------------------------------------------------------------------------
Prefix:  x++;
Postfix: ++x;

--------------------------------------------------------------------------------------------
decrement operators
--------------------------------------------------------------------------------------------
Prefix:  x--;
Postfix: --x;
*/
#include <iostream>
using namespace std;

int main(){
    int y,b;
    int x=5; int a=5;
    //Prefix: increments before use.
    y=++x; //here x=6 and y=6
    cout<<x<<y<<endl;
    //Postfix: uses before increments.
    b=a++; //here a=6 and b=5
//    z = ++x * y--; in such case, y will be updated after the operation, and x before.
    cout<<a<<b<<endl;
    cout<<"bitwise complements of the above nos="<<~a<<~b;

    return 0;
}



/*
--------------------------------------------------------------------------------------------
arithmetic operators: used to calculate
--------------------------------------------------------------------------------------------
+,-,*
/   any remainder is dropped and integer value is returned;
    if one or both operands are float, it does floor division.
%   returns the remainder, (eg. if a%2==0; a is even)

--------------------------------------------------------------------------------------------
assignment operators: evaluates by the current value of unary operand, then updates it
--------------------------------------------------------------------------------------------
a+=1   a-=1   a*=1   a/=4   a%=4
a=a+1  a=a-1  a=a*1  a=a/4  a=a%4

---------------------------------------------------------------------
relational operators (returns only boolean values, i.e. true/false)
---------------------------------------------------------------------
<,<=,>=,==,!=

---------------------------------------------------------------------
logical operators
---------------------------------------------------------------------
&& - and-  x&&y
when both are true (like set's intersection)

|| - or - x||y
when either is true (like set's union)

!  - not-  !x
gives true if the argument evaluates to be false (like set's complement)
example- paste the code above, to check how it works
    if (!b == 0) //b==0, returns true if b=0, ! flips the result thus, giving true only when b!=0
        cout << "Great, not equal to 0";
    else
        cout << "You typed zero";


---------------------------------------------------------------------
Bitwise operators- used to perform bit manipulation
---------------------------------------------------------------------

AND(&)= Takes 2 numbers as operands, and does (AND) comparing every bit
of the two numbers. The result of AND is 1 only if both bits are 1.
eg: 6&7= 0110 & 0111= 0110 = 6

OR(|)= Takes 2 numbers as operands, and does (OR) comparing every bit
of the two numbers. The result of OR is 1 if any of the two bits is 1.
eg: 6|7= 0110|0111=0111=7

NOT(~)= It takes one number and inverts all bits of it.
eg: ~1=0; ~0=1;

XOR(^)= It takes two numbers as operands and does XOR on every bit of two numbers.
eg: 6 ^ 7 = 0110 ^ 0111= 0001=1

Left shift operator (<<): means increasing numbers of 0’s to the right. 
eg: 8<<2= 1000<<2=100000 =32

Right shift operator(>>): means remove numbers of 0’s from right
eg: 8>>2= 1000>>2= 10 = 2


NOTE: The left shift and right shift operators should not be used for negative numbers.
If any of the operands is a negative number, it results in undefined behaviour.


---------------------------------------------------------------------
Misc Operators
---------------------------------------------------------------------
Conditional Operator(?:) Syn: (condition)? option 2 : option 2;
It will return the first option if the first condition is true;
otherwise, it will return second.
eg: 
int a = 1, b;
(a < 10) ? 2 : 5; As a is less than 10 hence b=2

Address of (&) Syn= &variableName

Value of(*) Syn= *(address)

sizeof(int) = returns size
*/ 