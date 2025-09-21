#include<iostream>
using namespace std;
double square(double length);
int main(){
    //return - return a value back to the spot where
    //             you called the encompassing function
    double length = 5.0;
    double area = square(length);
    cout<<"Area is equal to  "<<area<<"cm^2";
    return 0;
}
double  square(double length){
    return length * length; 

}