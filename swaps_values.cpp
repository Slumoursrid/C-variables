#include <iostream>
using namespace std;
int main (){
// A little program that swaps the values input by the user and displays them
    int a;
    int b;
    
    // Prompt the user to input 2 values, respectively for variables a and b
    cout << "Enter two values: ";
    cin >> a >> b;                
    
    // Display the values the user entered
    cout << "Ok you entered " << a << ", " << b << std::endl;
    
    // Display the swapped values (b first, then a)
    cout << "Swapped values: " << b << " and " << a;
}
