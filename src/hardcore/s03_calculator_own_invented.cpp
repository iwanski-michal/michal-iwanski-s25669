#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char const *argv[])
{
    std::vector<std::string> arguments(argv + 1, argv + argc);
    // std::cout << arguments.size() << " arguments";

    int result;
    double a = 0;
    double b = 0;

    for (int i = 0; i < arguments.size(); i++)
    {
        // std::cout << arguments[i] << std::endl;
        if (arguments[i] == "p")
        {
            std::cout << result << std::endl;
            arguments[i] = std::to_string(result);
        }
        else if (arguments[i] == "+")
        {
            a = std::stod(arguments[i - 2]);
            b = std::stod(arguments[i - 1]);
            std::cout << "dodajemy " << a << " + " << b << std::endl;
            result = a + b;
            std::cout << result << std::endl;
        }
        else if (arguments[i] == "-")
        {
            a = std::stod(arguments[i - 2]);
            b = std::stod(arguments[i - 1]);
            std::cout << "odejmujemy " << a << " - " << b << std::endl;
            result = a - b;
        }
        else if (arguments[i] == "*")
        {
            a = std::stod(arguments[i - 2]);
            b = std::stod(arguments[i - 1]);
            std::cout << "mnozymy " << a << " * " << b << std::endl;
            result = a * b;
        }
        else if (arguments[i] == "/")
        {
            a = std::stod(arguments[i - 2]);
            b = std::stod(arguments[i - 1]);
            std::cout << "dzielimy " << a << " / " << b << std::endl;
            result = a / b;
        }
        else if (arguments[i] == "%")
        {
            a = std::stoi(arguments[i - 2]);
            b = std::stoi(arguments[i - 1]);
            std::cout << "reszta z dzielenia " << a << " % " << b << std::endl;
            result = (int)a % (int)b;
        }
        else if (arguments[i] == "//")
        {
            a = std::stoi(arguments[i - 2]);
            b = std::stoi(arguments[i - 1]);
            std::cout << "dzielenie calkowite " << a << " // " << b << std::endl;
            result = a / b;
        }
        else if (arguments[i] == "**")
        {
            a = std::stoi(arguments[i - 2]);
            b = std::stoi(arguments[i - 1]);
            std::cout << "potegowanie " << a << " ** " << b << std::endl;
            result = std::pow(a, b);
        }
        else if (arguments[i] == "sqrt")
        {
            a = std::stoi(arguments[i - 1]);
            std::cout << "pierwiastkowanie" << a << std::endl;
            result = std::sqrt(a);
        }
        else if (arguments[i] == "!")
        {
            a = std::stoi(arguments[i - 1]);
            std::cout << "silnia !" << a << std::endl;
            long long power = 1;
            for (int i = a; i > 1; i--)
            {
                power *= i;
            }
            result = power;
        }
    }
    return 0;
}
