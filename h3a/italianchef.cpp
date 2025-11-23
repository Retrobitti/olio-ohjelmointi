#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string s) : Chef(s) {
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef " << name << " makes pasta" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}
