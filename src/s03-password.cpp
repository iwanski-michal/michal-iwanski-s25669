#include <iostream>
#include <string>
#include <cstdlib>

auto main (int argc, char* argv[]) -> int
{
	std::string provided_password;

	if(argc <= 1)
	{
		std::cout << "Brak podanego argumentu, abort mission!";
		return 1;
		
	}
	std::string password = std::string(argv[1]);

	do
	{
		std::cout << "Password: ";
		std::cin >> provided_password;
		/* code */
	} while (password != provided_password);
	std::cout << "ok! \n";
	

	return 0;
}
