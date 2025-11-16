
#ifndef CAR_H
#define CAR_H

#include <string>
using std::string;


class Car {
    private:
        string brand;
        string model;
        int yearModel;
    public:
        Car(string brand, string model, int yearModel);
        void printData() const;
};

#endif // CAR_H
