#include <iostream>
#include <algorithm>
using namespace std;

int print_even(int n) {
    if (n % 2 == 0)
        cout << n << ' ';
}

int main(){
    int a=5;
    //for loop [Syn= for (initialization expression; condition expression; update expression) {body} ]
    for (int i = 1; i <= 5; i++) {
        cout << "Hello World\n";
    }

    /*While loop- Syn
    initialization;
    while (condition) {
        // statements
        update_expression; }
    */
    while (a<10){
        cout<<"WEEEE!!"<<a<<endl;
        a++;
    }

    /*do-while loop- Body is executed, then condition is checked.
    thus it runs always one more time, since the condition is false.
    initialization;
    do {
        // statements
        update_expression;
    }
    while (condition);
    */
    int b=7;
    do{
        cout<<"b is now"<<b<<endl;
        b++;
    }while (b<10);

    /*for_each() loop -This loop accepts a function that executes over each of the elements in a container.
    This loop is defined in the header file “algorithm” and hence has to be included for this loop’s successful operation.
    for_each (initial, last, Function fn);
    */
    int arr[5]={1,2,3,4,5};
    for_each(arr, arr + 5, print_even);

    return 0;
}
