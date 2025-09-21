#include<iostream>
using namespace std;
int main(){

    double temp;
    char unit;
    cout<<"**************TEMPERATURE CONVERSION**********************"<<'\n';
    cout<<"F = Farenheit"<<'\n';
    cout<<"C = Celsius"<<'\n';
    cout<<"What unit would you like to convert:  ";
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<<"Enter the temperature in celsius:  ";
        cin>>temp;
        temp = (1.8 * temp) + 32.0;
        cout<<"Temperature is :  "<< temp<<"F\n";


    }
    else if(unit == 'C' || unit == 'c'){
        cout<<"Enter the temperature in Farenheit:   ";
        cin>>temp;
        temp = (temp - 32)/1.8;
        cout<<"Temperature is :  "<< temp<<"C\n";
        
    }
    else{
        cout<<"please give a valid response";
    }
    cout<<"**********************************************************";
    return 0;
}