//WAP that prints the factorial of a given number.
#include <iostream>
using namespace std;

int factorial(int n)
{
  /*Base Case- Defines the exit condition.
    Without it, the funtion will become an infinite loop.
  */
  if (n==1) { //if statement defines the exit condition. 
    return 1; //when n equals one, return 1 as the factorial of 1 is 1
  }
  /*Recursive Case- Defines the recursive condition. 
  Which runs as long as the base case is not satisfied.
    eg- factorial(4)
    return 4 * factorial(3),
    --> 4*3*factorial(2),
    --> 4*3*2*factorial(1),
    --> 4*3*2*1
   */
  else {
    return n * factorial(n-1);
  }
}
//calling our function
int main(){
    cout<<factorial(10);
}