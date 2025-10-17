#include <iostream>


int main(){
    // 2 firsts values of Fibonnacci sequences
    int a = 0;
    int b = 1;

  // a and b take in value a fibonnaci sequence number and display it
    for(int i = 0; i <=10; i++){
    a = a+b; //egs 1st loop : a is equal to 0 + 1 so 1
    b = b+a; // 1st loop : b is equal to 1 + 0 so 1
    std::cout << a << "\n" << b << "\n"  ;
    // in the next loop a will stock 1 + 1 so a will stock 2
    // b will stock 1 + 2 so 3
    }

}
