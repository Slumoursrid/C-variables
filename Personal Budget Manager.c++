#include <iostream>

//Calculate the totalExpenses
int calculateTotalExpenses(int rent, int groceries, int transportation, int entertainment, int monthlyIncome){
    
    int total = rent + groceries + transportation + entertainment;
    int calcul = monthlyIncome - total;
    
    return calcul;
}

int main()
{
    // variables declaration
    int monthlyIncome{};
    int rent{};
    int groceries{};
    int transportation{};
    int entertainment{};
    int savingPourcentage{};
    int totalExpenses{};
    int actualSavings{};
    int targetSavings{};
    
    std::cout << "How much do you earn per month?\n";
    std::cin >> monthlyIncome;
    
    std::cout << "How much is your rent?\n";
    std::cin >> rent;
    
    std::cout<<  "How much do you spend on groceries\n?";
    std::cin >> groceries;
    
    std::cout << "What are your transportation costs?\n";
    std::cin >> transportation;
    
    std::cout << "How much do you spend on entertainment?\n";
    std::cin >> entertainment;
    
    calculateTotalExpenses(rent, groceries, transportation, entertainment, monthlyIncome);
    std::cout << "Total monthly expenses: " << totalExpenses;
    
}
