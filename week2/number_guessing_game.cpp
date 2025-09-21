#include<iostream>
#include<ctime>
#include<limits>//Needed for numeric_limits

using namespace std;
int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) +1;

    cout<<"**********NUMBER GUESSING GAME**********"<<'\n';
    do{
        cout<<"Guess the number(1-100) :  "<<'\n';
        cin>>guess;
        tries++;
         if (cin.fail()) {
            cout << "Invalid input! Please enter a number." << '\n';
            cin.clear(); // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            continue; // Skip the rest of the loop and start over
         }
         tries++;
        if(guess > num){
            cout<<"Guess is too high"<<'\n';

        }
        else if(guess < num){
            cout<<"Guess is too low"<<'\n';
        }
        else{
            cout<<"CORRECT! # of tries"<<tries<<'\n';
        }

    }while(guess != num);
    

    return 0;
}