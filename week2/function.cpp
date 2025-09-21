#include<iostream>
using namespace std;
void happybirthday(string name, int age);


int main(){
    //function is block of reusable code
    int age = 19;
    string name = "Abhi";
    happybirthday(name,age);

    return 0;
}
void happybirthday(string name, int age){//here we pass the arguements name and age if we change the name thats also works same 
                                           //for ex-  void happybirthday(string birthday boi, int edge) it prints same
    cout<<"happy birthday to "<<name<<'\n';
    cout<<"happy birthday to "<<name<<'\n';
    cout<<"happy birthday dear "<<name<<'\n';
    cout<<"Now you are "<<age<<"years old"<<'\n';

    //Parameters or Arguments
    //return_type name(type1 name1, type2 name2...) {
    // Function body
    //return val;
//}
}