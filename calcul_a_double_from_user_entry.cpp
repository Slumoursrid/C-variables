#include <iostream>
// Calculate a value by multiplying it by two
int doubleNumber(int x){
    
    int calcul{x * 2};
    
    return calcul;
}

// Prompt the user to enter a value and call the function above to double it 
int main()
{
    
    std::cout<< "Enter an integer of your choice: ";
    int user_integer{};
    std::cin >> user_integer;
    std::cout<< doubleNumber(user_integer);
    
    
    return 0;
}
