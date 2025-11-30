#include "car.h"
#include <iostream>

Car::Car() {}
Car::Car(string a, string b) {
    brand = a;
    model = b;
}

void Car::setEngine() {
    e.setHorsepower(150);
    e.setDisplacement(2.0);
}

void Car::setWheels() {
    Wheel* wheels[] = { &w1, &w2, &w3, &w4 };

    for(Wheel* w : wheels) {
        w->setSize(17);
        w->setType("kesarengas");
    }
}

void Car::setBrand(string s) {
    brand = s;
}

string Car::getBrand() {
    return brand;
}

void Car::setModel(string s) {
    model = s;
}

string Car::getModel() {
    return model;
}

void Car::printDetails() {
    Wheel* wheels[] = { &w1, &w2, &w3, &w4 };
    int i = 1;

    std::cout << "Auto: " << getModel() << " " << getBrand() << std::endl;
    std::cout << "Moottori: " << e.getHorsepower() << " hp, " << e.getDisplacement() << " L" << std::endl;

    for (Wheel* w : wheels) {
        std::cout << "Rengas " << i << ": " << w->getSize()
        << " tuumaa, " << w->getType() << std::endl;
        i++;
    }
}
