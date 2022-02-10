#include <iostream>
#include <cmath>

int main (){
    int num;
    std::cout << "Please enter an integer: " << std::endl;
    std::cin >> num;

    while (num < 0 || num > 99)
    {
        std::cout << "Please re-enter: ";
        std::cin >> num;
    } 

    int new_num = pow(num, 2);
    std::cout << "Number squared is " << new_num;

    return 0;
}