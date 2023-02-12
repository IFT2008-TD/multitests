//
// Created by Pascal Charpentier on 2023-02-11.
//

#include "Tuba.h"

Tuba::Tuba() : piston({UP, UP, UP}) {}

void Tuba::presserPiston(size_t numero) {
    assert(numeroDePistonEstValide(numero)) ;
    piston[numero] = DOWN ;
}

void Tuba::relacherPiston(size_t numero) {
    assert(numeroDePistonEstValide(numero)) ;
    piston[numero] = UP ;
}

std::string Tuba::soufflerNote() const {
    if (piston[0] == UP && piston[1] == UP && piston[2] == UP) return "DO!" ;
    else return "COUAC!" ;
}

bool Tuba::numeroDePistonEstValide(size_t numero) {
    return numero < 3 ;
}


