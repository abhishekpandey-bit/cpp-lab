#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name  ";
    getline(cin,name);
    name.append("gmail.com");
    cout<<"your username is now: "<<name<<'\n';
    cout<<name.at(0);//0 is index in which a is so it prints a if 1 -b
    //name.insert(0,@);//it will insert @ in index 0 - prints @abhishek or @name
    //name.find('char')- tells index of char
    //name.erase(starting index,ending index)-erases that much

    return 0;
}