#include<iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 10000000;
    int choice = 1;
    do {
        cout << "************************\n";
        cout << "*****Enter choice*******\n";
        cout << "************************\n";
        cout << "1.Show Balance\n";
        cout << "2.Deposit Money\n";
        cout << "3.Withdraw Money\n";
        cout << "4.Exit\n";  // Added newline here
        cin >> choice;
        cin.clear();
        fflush(stdin);//this codes prevents infinte loops

        switch(choice) {
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                showBalance(balance);
                break;

            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4:
                cout << "Thanks for visiting!\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is : $" << setprecision(2) << fixed << balance << '\n';
}

double deposit() {
    double amount = 0;
    cout << "Enter the amount to be deposited: $";
    cin >> amount;
    if(amount > 0) {
        return amount;
    }
    else {
        cout << "That's not a valid amount\n";
        return 0;  // must return a value here
    }
}

double withdraw(double balance) {
    double amount = 0;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;
    if(amount > 0 && amount <= balance) {
        return amount;
    }
    else {
        cout << "Invalid withdrawal amount\n";
        return 0;
    }
}
