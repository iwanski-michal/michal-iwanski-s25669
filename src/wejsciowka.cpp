#include <iostream> // for std::cout , std::cerr , and std::cin
#include <string>
auto main() -> int
{
    int n;
    std::cout << "Podaj liczbe";
    std::cin >> n;

    for (auto j = 0; j < n; j++)
    {
        for (auto i = n; i > 0; i--)
        {
            if (i >= n-j)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }

    // std::cout << "------------- \n";
    for (auto j = 0; j < n; j++)
    {
        for (auto i = 0; i < n; i++)
        {
            if (i < n - j)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
}
