#include "Model.h"
#include <iostream>
using namespace std;

Model::Model(){
    // empty body
}

Model::~Model(){
    // empty body
}

string Model::translateSingleCharacter(char singleChar){
    bool isUpperCase = false;
    if (singleChar == toupper(singleChar)) {
        isUpperCase = true;
        singleChar = tolower(singleChar);
    }

    string translation;
    switch(singleChar) {
        case 'b' :
            translation = "bub";
            break;
        case 'c' :
            translation = "cash";
            break;
        case 'd' :
            translation = "dud";
            break;
        case 'f' :
            translation = "fuf";
            break;
        case 'g' :
            translation = "gug";
            break;
        case 'h' :
            translation = "hash";
            break;
        case 'j' :
            translation = "jay";
            break;
        case 'k' :
            translation = "kuck";
            break;
        case 'l' :
            translation = "lul";
            break;
        case 'm' :
            translation = "mum";
            break;
        case 'n' :
            translation = "nun";
            break;
        case 'p' :
            translation = "pub";
            break;
        case 'q' :
            translation = "quack";
            break;
        case 'r' :
            translation = "rug";
            break;
        case 's' :
            translation = "sus";
            break;
        case 't' :
            translation = "tut";
            break;
        case 'v' :
            translation = "vuv";
            break;
        case 'w' :
            translation = "wack";
            break;
        case 'x' :
            translation = "ex";
            break;
        case 'y' :
            translation = "yub";
            break;
        case 'z' :
            translation = "zub";
            break;
        default :
            translation += singleChar;
            return translation;
    }
    if(isUpperCase){
        translation[0] = toupper(translation[0]);
        return translation;
    }


}

string Model::translateDoubleCharacter(char doubleChar){
    bool isUpperCase = false;
    if (doubleChar == toupper(doubleChar)) {
        isUpperCase = true;
        doubleChar = tolower(doubleChar);
    }
    string translation;
    if (doubleChar == 'a' || doubleChar == 'e' || doubleChar == 'i' || doubleChar == 'o' || doubleChar == 'u') {
        translation = "squat";
        translation += doubleChar;
    } else {
        translation = "squa" + translateSingleCharacter(doubleChar);
        // translation += doubleChar;
    }
    if(isUpperCase){
        translation[0] = toupper(translation[0]);
    }
    return translation;
}
