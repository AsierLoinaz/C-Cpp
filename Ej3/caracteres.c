#include "caracteres.h"


bool isUpperCase(char c){
    if (c >= 'A' && c <= 'Z'){
        return true;
    } return false;
}

bool isLowerCase(char c){
    if (c >= 'a' && c <= 'z'){
        return true;
    } return false;
}


bool isLetter(char c){
    if (isUpperCase(c) || isLowerCase(c)){
        return true;
    } return false;
}

bool isNumber(char c){
    if (c >=48 && c <= 57){
        return true;
    } return false;
}

int isOtherChar(int c){
    if (!isNumber(c) && !isLetter(c)){
        return 1;
    } return 0;
}

int isEnter(int c){
    if (c == '\n'){
        return 1;
    } return 0;
}

char toUpperCase(char c){
    if (isLetter(c-32)){
        return (c-32);
    } return -1;
}

int toLowerCase(int c){
    if (isLetter(c+32)){
        return (c+32);
    } return -1;
}

