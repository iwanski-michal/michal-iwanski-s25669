#include <iostream>
#include <string>
auto main(int argc , char* argv []) -> int
{
auto const a = std::stoi(argv [1]);
auto const b = std::stoi(argv [2]);
if (b == 0){
std::cout << "NIE MOZNA DZIELIC PRZEZ 0 CHOLERO! \n";
}else{
std::cout << (a / b) << "\n";
}
return 0;
}
