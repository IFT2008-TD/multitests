#include <iostream>

#include "Tuba.h"
#include "Trompette.h"

int main() {
    Tuba monTuba ;
    Trompette maTrompette ;

    std::cout << "Tuba: " << monTuba.soufflerNote() << std::endl ;
    std::cout << "Trompette: " << maTrompette.soufflerNote() << std::endl ;

    return 0;
}
