//
// Created by Pascal Charpentier on 2023-02-11.
//

#include "Tuba.h"
#include "gtest/gtest.h"

TEST(Tuba, constructeur_trois_pistons_up) {
    Tuba monTuba ;
    EXPECT_EQ("DO!", monTuba.soufflerNote()) ;
}
