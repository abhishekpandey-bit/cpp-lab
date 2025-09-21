#include<iostream>
#include<cmath>
int main(){
    double x =3;
    double y =4;
    double z;
    double t;
    double p;
    double sq;
    double ab;
    z = std::max(x,y);//returns max value between any two 
    std::cout<<z<<'\n';
    t = std::min(x,y);
    std::cout<<t<<'\n';
    //pow function is power that means 2,3 == 2 to the power3
    p = pow(2,3);
    std::cout<<p<<'\n';
    //sqrt - square root function
    sq = sqrt(9);
    std::cout<<sq<<'\n';
    //absolute value function -abs
    ab = abs(-3);
    std::cout<<ab<<'\n';
    //round function use for rounding a decimal number
    //ceil function use for rounding up means 3.14 to 4 
    //floor function round down means 3.99 to 3


     
      


    return 0;
}