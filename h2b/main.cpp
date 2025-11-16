
#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Fiat", "1100 TV Spider", 1958);
    carList.emplace_back("Morris", "Mini-Minor", 1964);
    carList.emplace_back("Toyota", "Avalon", 1999);

    carList[1].printData();

    for (Car car : carList) {
        car.printData();
    }
    return 0;
}
