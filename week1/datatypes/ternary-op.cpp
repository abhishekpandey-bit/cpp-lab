#include<iostream>
using namespace std;
int main(){

    //ternary operator - replacement to a if/else 
    //condition? expression1:expression2;
    //int marks = 70;
    //marks>=60? cout<<"PASS" : cout<<"FAIL";
    //even or odd
    int number;
    cout<<"Enter number";
    cin>>number;
    number % 2 == 0? cout<<"Even" : cout<<"Odd";
    return 0;
}