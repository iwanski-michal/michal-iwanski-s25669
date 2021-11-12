#include <iostream>

struct jakasStruktura
{
    private:
    std::string jakiesPole1;
    std::string jakiesPole2;

    public:
    jakasStruktura(std::string pole1, std::string pole2){
        jakiesPole1 = pole1;
        jakiesPole2 = pole2;
    }
    ~jakasStruktura(){
        std::cout << "Wlasnie bedziemy niszczyc obiekcik, prosze odsunac sie ze strefy wyburzenia \n";
        std::cout << jakiesPole1 << "\n";
        std::cout << jakiesPole2 << "\n";
        std::cout << "DESTRUCTION!!!";
    }
    /* data */
};


auto main()-> int
{
    std::string TestDelay;
    auto NowaStruktura = jakasStruktura("COS", "DRUGI COS");
    std::cin >> TestDelay;
    return 0;
}
