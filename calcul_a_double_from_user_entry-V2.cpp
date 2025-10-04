#include <iostream>





// Prompt for telling to thse user that he can enter a integer of his choice
int entry_user(){
    
    std::cout<< "Enter a integer of your choice: " ;
    int user_integer{};
    std::cin >> user_integer;
    return user_integer;
}


// Double an integer value
int doubleNumber(int x){
    
    int calcul{x * 2};
    
    return calcul;
}


// Just output the result of double the integer of the user by argument the entry_user fucntion into double Number function 
int main()
{
    std::cout << doubleNumber(entry_user()); 
    return 0;
}
