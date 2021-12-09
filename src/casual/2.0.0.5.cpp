#include <iostream>

int a, b, suma;
bool pierwsza = true;

auto czypierwsza(int a)
{
    std::cout << "Sprawdzamy liczbe: " << a << std::endl;

	if (a <= 1)
	{
        std::cout << "Nie jest pierwsza glabie!";
		return false;
	}
		for (int i = 2; i < a ; ++i)
		{

			if (a % i == 0)
			{ //nie jest to liczba pierwsza

				return false;
                std::cout << "liczba" << a << "Nie jest pierwsza bo dzieli sie przez" << i << std::endl;
			}
		}
    std::cout << "Liczba" << a  << "jest pierwsza"<< std::endl;
	return true;
}

auto main() -> int
{
	std::cout << "Podaj liczbe: ";
	std::cin >> a;
	std::cout << std::endl;

		for (b = 1; b <= a; ++b)
		{
			pierwsza = czypierwsza(b);
			if (pierwsza == true)
			{
				suma=suma+b;
			    std::cout << b<< std::endl;
			}
		}

	std::cout << suma<< std::endl;

	return 0;
}