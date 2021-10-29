#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int
{

    if (argc <= 1)
    {
        std::cout << "Brak podanego argumentu, abort mission! \n";
        return 1;
    }

    bool separateArguments = false;
    bool printEnter = false;
    bool reversed = false;
    int optionsCount = 0;
    for (int i = 1; i < argc; i++)
    {
        // std::cout << "Element z argv: " << argv[i] << "\n";
        if (std::string(argv[i]) == "-n")
        {
            // printf("Wybrano -n \n");
            printEnter = true;
            optionsCount++;
        }
        else if (std::string(argv[i]) == "-r")
        {
            // printf("Wybrano -r \n");
            optionsCount++;
            reversed = true;
        }
        else if (std::string(argv[i]) == "-l")
        {
            // printf("Wybrano -l \n");
            separateArguments = true;
            optionsCount++;
        }else
        {
            break;
        }
        
    }

    if (separateArguments)
    {
        // printf("DRUKUJ ENTERY");
        if (reversed)
        {
            // printf("ODWROCENIE!");
            for (auto i = argc - 1; i >= 1 + optionsCount; i--)
            {
                std::cout << "\n" << argv[i];
            }
        }
        else
        {
            // printf("Drukuj normalnie");
            for (auto i = 1 + optionsCount; i <= argc; i++)
            {
                std::cout << "\n" << argv[i];
            }
        }
    }
    else
    {
        // printf("NIE DRUKUJ ENTEROW");
        if (reversed)
        {
            // printf("ODWROCENIE!");
            for (auto i = argc - 1; i >= 1 + optionsCount; i--)
            {
                std::cout << argv[i];
            }
        }
        else
        {
            // printf("Drukuj normalnie");
            for (auto i = 1 + optionsCount; i <= argc; i++)
            {
                std::cout << argv[i];
            }
        }
    }




    if (!printEnter)
    {
        std::cout << "\n";
    }
    

    // test_function(argc - 1, argv + 1, printEnter, reversed);

    // for (auto && argument : arguments)
    // {
    //     if (argument == "-n")
    //     {
    //         printf("WYBRANO -n");
    //     }else
    //     {
    //         printf("WYBRANO COS INNEGO");
    //     }

    // }

    // while ((++argv)[0])
    // {
    //     printf(argv[0]);
    //     if (argv[0] == "-n")
    //     {
    //         printf("WYBRANO OPCJE -n");
    //     }else if (argv[0] == "-r")
    //     {
    //         printf("WYBRANO OPCJE -r");
    //     }else
    //     {
    //         break;
    //     }

    // }
    return 0;
}