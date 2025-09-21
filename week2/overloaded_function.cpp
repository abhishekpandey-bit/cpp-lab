#include<iostream>
using namespace std;
void bakepizza();
void bakepizza(string toping1);

//functions that can be same but have different set of parameters
int main(){
    bakepizza("mushrooms");
    return 0;
}
void bakepizza(){
    cout<<"Here is your pizza"<<'\n';
}
void bakepizza(string toping1){
    cout<<"Here is your "<<toping1<<" pizza"<<'\n';
}