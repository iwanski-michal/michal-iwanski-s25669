#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

auto main (int argc, char* argv[]) -> int
{

	if(argc <= 1)
	{
		std::cout << "Brak podanego argumentu, abort mission! \n";
		return 1;
	} else if (argc > 2)
	{
		std::cout << "Podano za duza ilosc argumentow, zdecyduj sie na jeden! \n";
		return 0;
	}
	
	int number;
	try
	{
	number = std::stoi(argv[1]);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cout << "Podana wartosc nie jest liczba!";
		return 1;
	}
	
	if (number > 0)
	{
		for (int i = number; i >= 0; i--)
		{
			std::cout << i << "\n";
			sleep(1);
		}
		
	}else{
		for (int i = number; i <= 0; i++)
		{
			std::cout << i << "\n";
			sleep(1);
		}
	}
	 
	

	return 0;
}
