
#include "car.h"
#include <iostream>

using namespace std;
Car::Car()
{
    setBrand("");
    setModel("");
    setYearModel(0);
}

void Car::setBrand(string s) {
    brand = s;
}

void Car::setModel(string s) {
    model = s;
}

void Car::setYearModel(int i) {
    yearModel = i;
}

void Car::printData() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Yearmodel: " << yearModel << endl;
}
