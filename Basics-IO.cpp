#include <iostream> //a header file including basic I/O options
#include<string>
using namespace std; //namespace provides scope for identifiers

/*Macros= Piece of code with an identifier, 
Whenever the compiler encounters this name,
the compiler replaces the name with the actual piece of code.
*/

#define Sum(a,b) (a+b)
#define limit 5


int main(){//the main funtion is the start of every c++ program

    //variables must be declared before use
    int a,d;
    auto b=10;//auto must be initialised and its type will be deduced from its initializer
    string s;
    cout<<"enter a number:"<<endl; //output
    cin>>a; //input
    cout<<"sum is:"<<Sum(a,b)<<endl;

    for (int i=0;i<limit;i++){
        cout<<"ola";//prints 5 times, as is the defined value of limit
    }

    /*getline()- is a standard library function used to read a string or a line from an input stream.
    It is used when input strings with spaces between them or process multiple strings at once.
    It is used because 'cin' stops its extraction when it encounters a blank space or a new line.*/
    getline(cin,s);
    cout<<s;

    return 0;
}

/*Syntax 1
istream& getline(istream& is, string& str, char delim);
  Syntax 2
istream& getline (istream& is, string& str);
*/