#include<iostream>
using namespace std;
int main(){
//defining a lambda function
    auto multi =[](int x,int y){
        return x*y;
    };
    cout<<multi(5,6);

    return 0;
}