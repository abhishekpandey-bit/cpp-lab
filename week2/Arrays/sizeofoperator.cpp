#include<iostream>
using namespace std;
int main(){
    //sizeof()- determines the size in bytes of a.
    //           variable,datatype,class,objects,etc
    double gpa = 2.5;
    string name = "bro code";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A' ,'B', 'C','D','E'};//each char is of one bytes so 5

    cout<< sizeof(grades) <<"bytes\n";

    return 0;
}
