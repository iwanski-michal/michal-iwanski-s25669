#include <iostream>

char asciiArray[93];

int main()
{
    int i;

    for(i = 33; i <= 126; i++)
    {
        asciiArray[i] = char(i);

        std::cout << "Element %i w tablicy" << asciiArray[i] << std::endl;
    }

     return 0;
}