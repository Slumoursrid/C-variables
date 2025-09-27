#include <iostream>
using namespace std;
// User enters 5 integers and this program calculates their average
int main(){
    cout << "Enter your integers: \n";                                                            
    
  // Declaration of 5 variables
    int integer1, integer2, integer3, integer4, integer5;                                
    
  // User inputs their values that are assigned to the variables respectively
    cin >> integer1 >> integer2 >> integer3 >> integer4 >> integer5;
   
  // A simple calculation to find the average of the 5 variables
    int average_calculation = (integer1 + integer2 + integer3 + integer4 + integer5) / 5;
    
  // The program output
    cout << "The average is: " << average_calculation;
}
