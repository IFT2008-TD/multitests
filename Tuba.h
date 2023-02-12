//
// Created by Pascal Charpentier on 2023-02-11.
//



#ifndef MULTITESTS_TUBA_H
#define MULTITESTS_TUBA_H

#include <array>
#include <string>

class Tuba {
public:
    typedef enum {UP, DOWN} Piston_State ;

public:
    Tuba()  ;

    void presserPiston(size_t numero) ;
    void relacherPiston(size_t numero) ;

    std::string soufflerNote() const ;



private:
    std::array<Piston_State, 3> piston ;

    static bool numeroDePistonEstValide(size_t numero) ;

};


#endif //MULTITESTS_TUBA_H
