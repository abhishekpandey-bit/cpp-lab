#include<iostream>
int main(){
    int n=3;
    char c = 'C';
    std::cout<<(int)c<<'\n'; // covert char to int 
    int sum = n + c; //char is converted to int automatically
    std::cout<<sum<<'\n';
    return 0; //in output 67(it is value of C in int ) and 70 


}