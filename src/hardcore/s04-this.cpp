#include <iostream>

struct jakisobiekt
{
    std::string jakiesPole1;
    std::string jakiesPole2;

    void jakasFunkcjaSkladowa(){
        std::cout << this << "\n";
    }

};

auto main()-> int{

    auto stworzonyObiekt = jakisobiekt();
    stworzonyObiekt.jakasFunkcjaSkladowa();
    std::cout << &stworzonyObiekt << "\n";

    std::cout << "z tego wynika, ze samo \"this\" wskazuje na adres obiektu, a \"&nazwaObiektu\" robi dokladnie to samo. \n";
    std::cout << "Ciekawe, do czego to sie przyda \n";
    return 0;

}
