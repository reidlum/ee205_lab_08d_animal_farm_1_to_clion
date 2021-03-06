///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "catDatabase.h"
#include "config.h"

struct Cat database[MAX_CATS];
NumCats numcats = 0;


const char* colorName(enum Color color)
{
    switch(color){
        case 0:
            return "Black";
        case 1:
            return "White";
        case 2:
            return "Red";
        case 3:
            return "Blue";
        case 4:
            return "Green";
        case 5:
            return "Pink";
    }
    return "none";
}

const char* breedName(enum breeds breed)
{
    switch(breed){
        case 0:
            return "Unknown Breed";
        case 1:
            return "Maine Coon";
        case 2:
            return "Manx";
        case 3:
            return "Shorthair";
        case 4:
            return "Persian";
        case 5:
            return "Sphynx";
    }
    return "none";
}

const char* genderName(enum genders gender)
{
    switch(gender){
        case 0:
            return "Unknown Gender";
        case 1:
            return "Male";
        case 2:
            return "Female";
    }
    return "none";
}


