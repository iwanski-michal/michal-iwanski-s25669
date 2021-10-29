#include <iostream>

auto main (int argc, char* argv[]) -> int
{
    int liczba_porownywana = std::stoi(argv[1]); //zamieniamy pierwszy element z tablicy ze stringa na inta i przypisujemy do zmiennej liczba_porownywana
    //zaczynamy i od dwojki, poniewaz pierwszym elementem w tablicy argv[] nie jest liczba, tylko nazwa programu jak go uruchamiamy czyli "./2.0.0.6"
    for (int i = 2; i < argc; i++) //argc to ilosc argumentow, ktore wpiszemy po spacji przy uruchamianiu programu (lacznie z ta nazwa programu, ktora liczy sie tez jako jeden z elementow)
    {
        int liczba = std::stoi(argv[i]); //przypisujemy nastepna liczbe do porownania
        if (liczba_porownywana > liczba) //porownujemy liczbe z kolejna liczba z tablicy czy jest wieksza
        {
            std::cout << liczba_porownywana << " > " << argv[i] << "\n"; //wypisujemy relacje
        }else if (liczba_porownywana < liczba) //sprawdzamy, czy moze jest jednak mniejsza od porownywanej_liczby
        {
            std::cout << liczba_porownywana << " < " << argv[i] << "\n";
        }else //jesli nie jest ani wieksza ani mniejsza, to musi byc rowna
        {
            std::cout << liczba_porownywana << " == " << argv[i] << "\n";
        }
        
        
            
    }
    
	return 0; //konczymy program
}
