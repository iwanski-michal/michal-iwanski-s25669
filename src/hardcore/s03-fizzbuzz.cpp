#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int
{
    if (argc <= 1)
    {
        std::cout << "Brak podanego argumentu, abort mission! \n";
        return 1;
    }

    auto const a = std::stoi(argv[1]);

    for (int i = 1; i <= a; i++)
    {
        std::string output = "";

        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz";
        else if (output == "") output = std::to_string(i);
        
        std::cout << output << "\n";
    }

    return 0;
}