#include <iostream>
#include <string>
#include <sstream>

class Time
{
private:
    int h;
    int m;
    int s;
public:
    Time(int h, int m, int s){
        if (h>=24 || m>=60 || s>=60)
        {
            std::cout << "Podano zle wartosci \n";
            //wyrzuc blad i zakoncz dzialanie
            throw "BLAD";

        }else{
        this->h = h;
        this->m = m;
        this->s = s;
        }
    };
    ~Time();
    auto toString(){
        if (h < 9){
            std::cout << "0" << h << ":";
        } else{
            std::cout << h << ":";
        }
        if (m < 9){
            std::cout << "0" << m << ":";
        } else{
            std::cout << m << ":";
        }        
        if (s < 9){
            std::cout << "0" << s << ":";
        } else{
            std::cout << s;
        }
        
        // std::stringstream output;
        // output (h < 9)? "0" << h << ":" : h << ":";
    }
};

Time::~Time()
{
}

auto main()-> int{

try
{
    auto nowyCzas = Time(1,1,200);
    nowyCzas.toString();
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return 1;
}




    return 0;
}
