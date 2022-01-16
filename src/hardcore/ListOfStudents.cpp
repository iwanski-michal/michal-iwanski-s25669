#include <iostream>
#include <string>
#include <sstream>
#include <vector>

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
    std::vector<student> students;
    auto ja = student{"Michal", "Iwanski", "s25669", 1, 2.0}; 
    auto ja2 = student{"Michal", "Iwanski", "s25669", 1, 2.0};
    auto ja3 = student{"Michal", "Iwanski", "s25669", 1, 2.0};
    // std::cout << ja.to_string();
    students.push_back(ja); //dodanie nowego studenta do listy
    students.push_back(ja2);
    students.push_back(ja3);
    

    for (int i = 0; i < students.size(); i++) //wyswietlenie wszystkich studentow z listy
    {
        std::cout << students[i].to_string();
    }

    students.erase(students.begin()+(1)); //skasowanie studenta z listy
    std::cout << "\n\n\n";
    
        for (int i = 0; i < students.size(); i++) //wyswietlenie wszystkich studentow z listy
    {
        std::cout << students[i].to_string();
    }
    


    return 0;
}
