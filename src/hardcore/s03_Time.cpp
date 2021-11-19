#include <iostream>
#include <string>
#include <sstream>

class Time
{
private:
    int h;
    int m;
    int s;
    enum TimeOfDay
    {
        morning,
        afternoon,
        evening,
        night
    };

public:
    Time(int h, int m, int s)
    {
        if (h >= 24 || h < 0 || m >= 60 || m < 0 || s >= 60 || s < 0)
        {
            throw std::invalid_argument("Podano godzine spoza dopuszczalnego zakresu!");
        }
        else
        {
            this->h = h;
            this->m = m;
            this->s = s;
        }
    };
    ~Time(){

    };
    auto toString()
    {
        if (h < 9)
        {
            std::cout << "0" << h << ":";
        }
        else
        {
            std::cout << h << ":";
        }
        if (m < 9)
        {
            std::cout << "0" << m << ":";
        }
        else
        {
            std::cout << m << ":";
        }
        if (s < 9)
        {
            std::cout << "0" << s << std::endl;
        }
        else
        {
            std::cout << s << std::endl;
        }
    }
    void nextHour()
    {
        if (h == 23)
        {
            h = 0;
        }
        else
        {
            h++;
        }
    }
    void nextMinute()
    {
        if (m == 59)
        {
            m = 0;
            nextHour();
        }
        else
        {
            m++;
        }
    }
    void nextSecond()
    {
        if (s == 59)
        {
            s = 0;
            nextMinute();
        }
        else
        {
            s++;
        }
    }
    TimeOfDay timeOfDay()
    {
        if (h >= 6 && h <= 12)
        {
            return morning;
        }
        else if (h >= 13 && h <= 18)
        {
            return afternoon;
        }
        else if (h >= 19 && h <= 23)
        {
            return evening;
        }
        else
        {
            return night;
        }
    };

    std::string toString(TimeOfDay value){
        if (value == 0)
        {
            return "morning";
        }else if ( value == 1 ){
            return "afternoon";
        }else if ( value == 2 ){
            return "evening";
        }
        else if ( value == 3 ){
            return "night";
        }
        
    }

    uint64_t countSeconds(){
        std::uint64_t secondsSum = 0;
        secondsSum += s;
        secondsSum += m * 60;
        secondsSum += h * 60 * 60;
        return secondsSum;
    }

    uint64_t countMinutes(){
        std::uint64_t minutesSum = 0;
        minutesSum += m;
        minutesSum += h * 60;
        return minutesSum;
    }

    Time timeToMidnight(){ //TODO!
        
    }
};

// Time::~Time()
// {
// }

auto main() -> int
{

    try
    {
        auto nowyCzas = Time(23, 59, 59);
        nowyCzas.toString();
        nowyCzas.nextSecond();
        nowyCzas.toString();
        nowyCzas.nextSecond();
        nowyCzas.toString();
        nowyCzas.nextSecond();
        nowyCzas.toString();
        nowyCzas.nextSecond();
        nowyCzas.toString();
        std::cout << nowyCzas.toString(nowyCzas.timeOfDay()) << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    return 0;
}
