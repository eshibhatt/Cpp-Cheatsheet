#include <iostream>
using namespace std;

int main(){
    //Declaring a class
    class BankAccount {
        public: //Access specifier: notice the :
            void sayHi(){
                cout << "Hi" << endl;
            }
    };//A class definition must be followed by a semicolon.
    //Our object (named test) has all the members of the class defined.
    BankAccount test;
    test.sayHi();//calling the method of an object

}
/*
OOP
---------------
1. Access Specifier- 
-Access specifiers are used to set access levels to particular members of the class.
-There are  three levels of access specifiers in c++. ie public,private and protected.
-Public- A member that has been defined using the public keyword can be accessed from outside the class,
as long as it's anywhere within the scope of the class object.
-Private- A private member cannot be accessed, or even viewed.
- We can hide attributes from outside code, then use public methods to access it.

2. We instantiate an object of a class, in the same way we define variables of a type,
the difference being that our object's type will be its class name.
gen-- <classname> <objectname>;
eg--  BankAccount test;

3.We must declare a class before using it, as we do with functions.

4.Abstraction- The concept of abstraction is that we focus on essential qualities,
rather than the specific characteristics.
eg. we can create a single bankAccount class, to fit the specifics of 
all individual accounts, than creating a new class for each.

5.Encapsulation-
-The key principle here is that an object only reveals what the other application 
components require to effectively run the application. All else is kept out of view.
- We hide the attribute/methods, of an object, such that it is accessible only by the object itself.
- Control the way data is accessed or modified.
- Code is more flexible and easy to change with new requirements.
- Change one part of code without affecting other part of code.
*/