#include<iostream>
using namespace std;
int main(){
    //for each loop -foreach loop in C++—officially called a range-based for loop—is a modern, 
    //simplified method of iterating over the elements of containers like arrays, vectors, and 
    //strings without using indices or manual loop control statements.
    string students[] = {"aaryan" , "abhishek" , "aditya" , "antariksh"};
    for(string student : students){
        cout<<student<<'\n';
    }
    return 0;
}