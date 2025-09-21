#include<iostream>
#include<ctime>
int main(){
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout<<"you win lottery"<<'\n';
        break;
        case 2: std::cout<<"you win car "<<'\n';
        break;

        case 3: std::cout<<"you win bike"<<'\n';
        break;
        case 4: std::cout<<"you win cash"<<'\n';
        break;
        case 5: std::cout<<"fuck you"<<'\n';
        break;
    }
    return 0;
}
