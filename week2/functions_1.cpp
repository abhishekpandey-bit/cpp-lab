#include <iostream>
using namespace std;

// Void function definition
void hello() {
    cout << "GeeksforGeeks" << endl;
}

// Return-type function definition
int square(int x) {
    return x * x;
}

int main() {

    // Calling the void function
    hello();

    // Calling the return-type function
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;

    return 0;
}
//how to declare a functions
//Return type: Specifies what type of value the function returns. Use void if there is no return value.
//Function name: The name you will use to call the function.
//Parameter list: Inputs that the function accepts. It can be empty if no inputs are needed.
//Function body: The block of code that runs when the function is called.