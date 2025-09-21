#include <iostream>
using namespace std;

int main() {
  
  	// For loop that starts with i = 1 and ends
  	// when i is greater than 5.
    for (int i = 1; i <= 20; i++) {
        cout << i << '\n';
        if(i == 13){
            continue;//it continue the statement but 13 not included
            //break;it break if 13 reads(break out the loop)
            //continue;- skip current iteration
        }
    }
    return 0;
}