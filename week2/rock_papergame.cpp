#include<iostream>
#include<ctime>
using namespace std; 
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player , char computer);
int main(){
    char player;
    char computer;

    player = getuserchoice();
    cout<<"you choose: ";
    showchoice(player);

    computer = getcomputerchoice();
    cout<<"computer choose: ";
    showchoice(computer);
    choosewinner(player , computer);

    return 0;

}
char getuserchoice(){
    char player;
    cout<<"ROCK PAPER SCISSORS GAME!\n";
    do{
        cout<<"'r' for rock\n";
        cout<<"'P' for paper\n";
        cout<<"'s' for scissors\n";
        cout<<"*************************\n";
        cin>>player;

    }while(player != 'r' && player != 's' && player != 'p');
    return player;
    
}
char getcomputerchoice(){
    srand(time(0));
    int sum = rand() % 3 + 1;
    switch(sum){
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }
    return 0;

}
void showchoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock\n";
        break;
        case 's':cout<<"Scissors\n";
        break;
        case 'p':cout<<"paper\n";
        break;
       
    }

}
void choosewinner(char player , char computer){

    switch(player){
        case 'r':   if(computer=='r'){
                    cout<<"Tie\n";
                    }
                    else if(computer=='s'){
                    cout<<"you win!\n";
                    }
                    else{
                    cout<<"you loose!\n";

                    }
                    break;
        case 's':   if(computer =='s'){
                    cout<<"Tie\n";
        }            
                    else if(computer =='r'){
                    cout<<"you loose!\n";
                }
                    else{
                        cout<<"you win!\n";
                    }
                    break;
        case 'p':   if(computer == 's'){
                    cout<<"you loose!\n";

        }            
        else if (computer == 'r'){
            cout<<"you win!\n";
        }
        else{
            cout<<"Tie\n";
        }
        break;



            }
        }