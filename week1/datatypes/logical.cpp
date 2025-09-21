#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter temp";
    cin>>temp;
    bool sunny = false;

    if(temp>=0 && temp<=30){
        cout<<"It is good temperature"<<'\n';


    }
    else{
        cout<<"It is bad temperature"<<'\n';
    }
    if(!sunny){
        cout<<" cloudy weather";

    }
    else{
        cout<<"sunny outisde";
    }
// && - to check if two statements are true
//|| - to check if any one statement is true
// ! - reverses the logical state of its operand




    return 0;
}