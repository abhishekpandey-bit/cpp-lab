#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name:  ";
    getline(cin, name);
    if(name.length() >12){
        cout<<"the name can't be over 12 characters"<<'\n';//checks length of string


    }
    else if(name.empty()){
        cout<<"You didn't enter your name";//checks if string is empty or not

    }
    else{
        cout<<"hello, "<<name;
    }
    //name.clear()- used to clear the name ,o/p will be hello only if use this



    return 0;
}