#include<iostream>
using namespace std;
int main(){
    //switch--alternative to using many 'else if' statements
    //         compare one value against matching cases
    int month;
    cout<<"enter the month(1-2)";
    cin>>month;
    switch (month){
        case 1: 
        cout<<"It is january"<<'\n';
        break;
        case 2: 
        cout<<"It is february"<<'\n';
        break;
        case 3: 
        cout<<"It is march"<<'\n';
        break;
        case 4: 
        cout<<"It is april"<<'\n';
        break;
        case 5: 
        cout<<"It is may"<<'\n';
        break;
        case 6: 
        cout<<"It is june"<<'\n';
        break;
        case 7: 
        cout<<"It is july"<<'\n';
        break;
        case 8: 
        cout<<"It is august"<<'\n';
        break;
        case 9: 
        cout<<"It is september"<<'\n';
        break;
        case 10: 
        cout<<"It is october"<<'\n';
        break;
        case 11: 
        cout<<"It is november"<<'\n';
        break;
        case 12: 
        cout<<"It is december"<<'\n';
        break;
        default:
        cout<<"please enter only numbers between 1-12";
    }


    return 0;
}