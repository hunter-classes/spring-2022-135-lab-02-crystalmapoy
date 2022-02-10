#include <iostream>

int main (){

    int myData[10];
    for (int i = 0; i < 10; i++){
        myData[i] = 1;
    }

    int i, v;

    do {
        std::cout << "\n";
        for (i = 0; i < 10; i++){
            std::cout << myData[i] << " " ;
        }        
        std::cout << "\nInput index: ";
        std::cin >> i;

        std::cout << "Input value: ";
        std::cin >> v;

        if (i >= 0 && i < 10){
            myData[i] = v;
        }
    } while (i >= 0 && i< 10);

    std::cout << "\nIndex out of range. Exit.\n";


    return 0;
}