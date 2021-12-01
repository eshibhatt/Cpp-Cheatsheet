/* Switch case  is used to test a variable, against a list of values, which are called cases.
- If a match is found corresponding to a case label, then the code following that label is executed until 
a break statement is encountered or the control flow reaches the end of the switch block.
- If there is no match, the code within default are executed.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any Alpabet\n"; //input alphabet from user
    cin>>ch;//store the Entered Alphabet in ch

    switch(ch){
    //check lower case vowel letters
    case 'a':
    cout<<ch<<" is a vowel";
    break; //without break, it runs all the statements starting from the 1st valid case to the end

    case 'e':
    cout<<ch<<" is a vowel";
    break;

    case 'i':
    cout<<ch<<" is a vowel";
    break;

    case 'o':
    cout<<ch<<" is a vowel";
    break;

    case 'u':
    cout<<ch<<" is a vowel";
    break;

    //check upper case vowel letters
    //NOTE: There cannot be duplicate case values.
    case 'A':
    cout<<ch<<" is a vowel";
    break;

    case 'E':
    cout<<ch<<" is a vowel";
    break;

    case 'I':
    cout<<ch<<" is a vowel";
    break;

    case 'O':
    cout<<ch<<" is a vowel";
    break;

    case 'U':
    cout<<ch<<" is a vowel";
    break;

    default: //its statements runs when all the cases are tested false
    cout<<ch<<" is a consonant";
    break;
    }

    getch();
    return 0;
    }