#include <iostream>
#include <string>

auto main (int argc, char* argv []) -> int
{

    	if(argc <= 1)
	{
		std::cout << "Brak podanego argumentu, abort mission! \n";
		return 1;
		
	}


	auto const a = std::stoi(argv[1]);
    
    for(auto i=a; i>=0; i--)
    {
        if(i>1)
        {
            std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
            std::cout << "Take one down, pass it around, " << i-1 << " bottles of beer on the wall...\n";
        }
        else if(i==1)
        {
            std::cout << i << " bottle of beer on the wall, " << i << " bottle of beer.\n";
            std::cout << "Take one down, pass it around, " << i-1 << " bottles of beer on the wall...\n";
        }        
        else
        {
            std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            std::cout << "Go to the store and buy some more, " << a << " bottles of beer on the wall...\n";
        }
    }
    
    return 0;
}

