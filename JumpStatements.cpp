/*-----------------------------------------------------------------------------------------
JUMP STATEMENTS
------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

void weirdo(a);
int printTIll(num);

int main(){
    int a,num;
    cin>>a>>num;
    weirdo(a);
    printTIll(num);

}

void weirdo(a){
    for (int i=0;i>10;i++){
        if (a==9){
            cout<<"not 6"<<endl;
            break;//goes to the 1st statement out of the loop
        }else if (a%3!=0){
            cout<<"there's no chance"<<endl;
            continue;//moves on to the next iteration of the loop
        }else if (a==6){
            cout<<"yayy u made it"<<endl;
        }
    }
    cout<<"operation finished";
}

int printTIll(num){
    /*goto <label> :The goto statement can be used to jump from anywhere to anywhere within a function.
    : colon is used at the end of labels of goto statements. */
    print:
        cout<<num<<" ";//prints num to 5
        num++;
        if(num<=5)
            goto print;
    //The return statement is used to terminate a function’s execution and transfer program control back to the calling function.
    return 0;
}
