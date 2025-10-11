#include <iostream>
#include <list>
#include <algorithm>

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

    std::cout << "---------------------\n";
    std::cout << "|  Monthly income:  |" << income <<"\n";
    std::cout << "|  Total expenses:  |" << expenses<<"\n";
    std::cout << "|  Actual savings:  |" << savings<<"\n";
    std::cout << "---------------------\n";


}


/*int calculateTargetsSavings(int income, int porcentage){

}*/



int findHighestExpenses(int rent, int groceries, int transportation, int entertainment){

    int maxExpenses = std::max({rent, groceries, transportation, entertainment});

    return maxExpenses;

}


int displayExpensePercentage(int expense, int totalExpenses){
    int calcul = (expense * 100) / totalExpenses;

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

    //Display the program name
    displayBudgetHeader();


    std::cout << "How much is your rent?\n";
    std::cin >> rent;

    std::cout<<  "How much do you spend on groceries?\n";
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

    //Call the displayStatistic to display the stats input by the user early
    displayStatistics(monthlyIncome, totalExpenses, actualSavings);

    //initalizing maxExpenses variable with findHighestExpenses function with all expenses as arguments
    int maxExpenses = findHighestExpenses(rent, groceries, transportation, entertainment);

    std::cout << "Your highest expenses is " << maxExpenses;

    //Initilizing 4 variable with displayExpensePercentage as value, each function has an expense arguments
    int expensePercentage{displayExpensePercentage(rent, monthlyIncome)};
    int expensePercentage2{displayExpensePercentage(groceries, monthlyIncome)};
    int expensePercentage3{displayExpensePercentage(transportation, monthlyIncome)};
    int expensePercentage4{displayExpensePercentage(entertainment, monthlyIncome)};

    std::cout << "Rent represent: " << expensePercentage << "%" << "of your expense\n";
    std::cout << "Groceries represent: " << expensePercentage2 << "%" << "of your expense\n";
    std::cout << "Transportation represent: " << expensePercentage3 << "%" << "of your expense\n";
    std::cout << "Entertainement represent: " << expensePercentage4 << "%" << "of your expense\n";
}
