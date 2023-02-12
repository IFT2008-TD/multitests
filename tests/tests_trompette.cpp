//
// Created by Pascal Charpentier on 2023-02-11.
//

#include "Trompette.h"
#include "gtest/gtest.h"

TEST(Trompette, constructeur_trois_pistons_up) {
    Trompette maTrompette ;

    EXPECT_EQ("DO!", maTrompette.soufflerNote()) ;
}
