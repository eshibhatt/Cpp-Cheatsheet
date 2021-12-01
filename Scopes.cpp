#include <iostream>
using namespace std;
/* Global variable declaration outside any function,
 and can be used anywhere in code
*/
int g;
int main() {
    g = 10; // Using global variable
    cout << g;
    return 0;
}

/*Local Scope
Variables declared within the body of a function or block are said to have local scope.
They can be used only by the statements inside the body of the function or the block they are declared within.
*/

void person() {
    string gender = "Male";
    //This variable gender is local to the function person()
    //and cannot be used outside this function.
}