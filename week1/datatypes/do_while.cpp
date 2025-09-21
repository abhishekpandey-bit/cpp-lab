#include<iostream>
using namespace std;
int main(){
    //do while loops - in this loop bunch of codes run first then condition is check 
    //                  if condition is true code executed else exits
    int number;

    do{
        cout<<"Enter a positive number";
        cin>>number;
    }while(number < 0);
    cout<<"positive number is "<<number;
    return 0;
}