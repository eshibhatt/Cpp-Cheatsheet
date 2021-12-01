#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    if (a==0){//u can nest if statements
        cout<<"you entered 0 \n";
    }
    else if(a<0){
        cout<<"you entered a -ve integer"<<endl; //if u need more conditions
    }
    else{
        cout<<"you entered an +ve integer \n"; //only runs if the "if condition" fails
    }
}
/* Extra points
------------------------
-unless u apply a jump statement
it will execute every condition which
is satisfied
-The if-statement block is only not executed when,
the expression evaluates to 0. For all other values,
it will be treated as true.
*/