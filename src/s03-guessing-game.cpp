#include <iostream>

int main()
{
    srand(time(NULL));
    int number = (rand()%100)+1;
    int user_number;
    do{
        std::cout << "guess: ";
        std::cin >> user_number;
        if(number<user_number)
        {
            std::cout << "number too big!\n";
        }
        else if(number>user_number)
        {
            std::cout << "number too small!\n"; 
        }
    }
    while(number!=user_number);

    std::cout << "just right! \n";

    return 0;
}
