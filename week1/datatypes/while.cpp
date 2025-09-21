#include<iostream>
using namespace std;
int main(){
    //while loop- until and unless the condition is true while loop runs and breaks when false
    string name;
    while(name.empty()){  // while will ask what name until u say it 
        cout<<"What is your name:  ";
        getline(cin,name);
    }
    cout<<"hello, "<<name;
    

    return 0;
}