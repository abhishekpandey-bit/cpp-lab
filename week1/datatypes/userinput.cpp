#include<iostream>
//cout << insertion operator
//cin >> extraction operator
int main(){
    std::string name;
    int age;
    std::cout<<"whats your name? :  ";
    std::getline(std::cin, name);//it creates the needed space in string

    //std::cin>>name;
    //getline(input_stream, string);//we will use getline function its syntax it this.
    //getline(input_stream, string, delimiter);

    std::cout<<("whats your age? : ");
    std::cin>>age;

    std::cout<<"hello " << name<<'\n';
    std::cout<<"you are  "<< age << " years old";





    return 0;
}