#include <iostream>
using namespace std;
int main()
{
    int integer1{};
    std::cout << "Enter an integer: ";
    std::cin >> integer1;
    std::cout << "The double of this integer is: " << integer1 * 2 << '\n';
    std::cout << "The triple of this integer is: " << integer1 * 3 << '\n';
    
    return 0;
}
