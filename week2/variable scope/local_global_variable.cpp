#include<iostream>
using namespace std;
int mynum = 3; // this is global variable - avoid using it
void printnum();
int main(){
    int mynum = 1;
    printnum();
    cout<<mynum;//here the local variables prints first
    //:: - scope resolution operator - if used it will print global variables instead of local
    //local variables declare inside a function or block{}
    //global variables = declared outside of all functions


    return 0;
}
void printnum(){
    int mynum = 2;
    cout<<::mynum<<'\n';
}