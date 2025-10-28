#include <iostream>
#include <string>
using namespace std;

//is it  a palindrome function
bool isItAPalindrome(string userEntry){

//number of caractere in a word
size_t totalLetter = userEntry.size();

//beginning point
int firstLetter = 0;
// Converting size type variable to an int to calculate the last letter below
int newTotalLetter = static_cast<int>(totalLetter);

int lastLetter = newTotalLetter - 1;

while(firstLetter < lastLetter){

    if (userEntry[firstLetter] != userEntry[lastLetter]) {

        return false;
    }

    firstLetter ++;
    lastLetter --;
}


return 0;
}


int main(){
    string entry_user{};

    std::cout << "entre ton mot";
    std::cin >> entry_user;

    isItAPalindrome(entry_user);
    if (isItAPalindrome(entry_user)) {
    cout << "C'est un palindrome !" << endl;
} else {
    cout << "Ce n'est pas un palindrome." << endl;
}




}

