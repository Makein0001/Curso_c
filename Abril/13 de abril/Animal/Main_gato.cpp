#include <iostream>
#include <string>
#include "Gato.cpp"
using namespace std;
int main()
{
    //Gato gat("Kitty",4,"Femenino");
    Gato gat("Kitty ", 6, true, true, " Femenino ", "2 orejas ", "1 cola ","ojos azules ", 4, true, "Felinos ");
    gat.getDatos();

    return 0;
}
