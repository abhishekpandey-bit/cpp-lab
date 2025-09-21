#include<iostream>
using namespace std;
int main(){
    // a const keyword is used to declare a constand variable
    //read only variable
    const double PI = 3.14159;
    //PI = 420; //the const variable cant be changed
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout<<"circumference is "<<circumference<<'\n';
    return 0;





}