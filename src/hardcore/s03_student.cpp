#include <iostream>
#include <string>
#include <sstream>

struct student
{
    private:
    std::string name;
    std::string surname;
    std::string index;
    int currentSemester;
    float averageGrade;
    public:
    student(std::string name, std::string surname, std::string index, int currentSemester, float averageGrade)
    {
        this->name = name;
        this->surname = surname;
        this->index = index;
        this->currentSemester = currentSemester;
        this->averageGrade = averageGrade;
    };
    auto to_string()-> std::string{
        std::ostringstream description;
        description << " imie: "
                    << name
                    << "\n nazwisko: "
                    << surname
                    << "\n nr indeksu: "
                    << index
                    << "\n aktualny semestr: "
                    << currentSemester
                    << "\n srednia ocen: "
                    << averageGrade
                    << "\n";
        return description.str();
    }
};
auto main()-> int{

    auto ja = student{"Michal", "Iwanski", "s25669", 1, 2.0};
    std::cout << ja.to_string();

    return 0;
}



