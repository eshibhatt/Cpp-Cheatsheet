#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int N,M;
    string S;
    getline(cin,S);//cin excludes the space from inputs
    N=S[1];
    M=S[2];
    for(int i=0; i<S.length(); i++)
    {
        cout << S[i]<<endl;//every index stores a new value
    }
    return 0;
}