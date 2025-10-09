#include <iostream>



//display the name of the program to the top
void displayBudgetHeader(){
    std::cout << "                    ########################################\n";
    std::cout << "                    Welcome on your personal budget manager!\n";
    std::cout << "                    ########################################\n";
}



//calculate expenses by month
int calculateTotalExpenses(int rent, int groceries, int transportation, int entertainment){

    int total = rent + groceries + transportation + entertainment;


    return total;
}


//calculate saving by month
int calculateSavings(int income, int expenses){

    int total_savings = income - expenses;

    return total_savings;
}


// Display statistics
void displayStatistics(int income, int expenses, int savings){

    std::cout << "------------------------\n";
    std::cout << "|  Monthly income: " << income <<"\n";
    std::cout << "|  Total expenses: " << expenses<<"\n";
    std::cout << "|  Actual savings: " << savings<<"\n";
    std::cout << "-------------------------\n";


}


/*int calculateTargetsSavings(int income, int porcentage){

}*/



int findHighestExpenses(int rent, int groceries, int transportation, int entertainment){
    listExpenses = [rent, groceries, transportation, entertainment];
    int maxExpenses = max(listExpenses)

    return maxExpenses
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

    //Display the program name
    displayBudgetHeader();


    std::cout << "How much is your rent?\n";
    std::cin >> rent;

    std::cout<<  "How much do you spend on groceries\n?";
    std::cin >> groceries;

    std::cout << "What are your transportation costs?\n";
    std::cin >> transportation;

    std::cout << "How much do you spend on entertainment?\n";
    std::cin >> entertainment;


    totalExpenses = calculateTotalExpenses(rent, groceries, transportation, entertainment);
    //Output the amount of totalExpenses by month
    std::cout << "Total monthly expenses: " << totalExpenses << "\n";

    std::cout << "How much do you earn per month?\n";
    std::cin >> monthlyIncome;

    //Calculate the actual saving through the input of the user
    actualSavings = calculateSavings(monthlyIncome, totalExpenses);
    std::cout << "Total savings: " << actualSavings << '\n';

    displayStatistics(monthlyIncome, totalExpenses, actualSavings);

    findHighestExpenses(rent, groceries, transportation, entertainment);

    int maxExpenses = findHighestExpenses(rent, groceries, transportation, entertainment);

    std::cout << "The highest Expenses are: " << maxExpenses;

}
