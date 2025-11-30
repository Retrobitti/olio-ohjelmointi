#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car car("Toyota", "Corolla");
    car.setEngine();
    car.setWheels();
    car.printDetails();
    return 0;
}
