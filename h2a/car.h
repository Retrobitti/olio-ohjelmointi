
#ifndef CAR_H
#define CAR_H

#include <string>
using std::string;




#include <string>
class Car {
    private:
        string brand;
        string model;
        int yearModel;
    public:
        Car();
        void printData() const;
        void setBrand(string s);
        void setModel(string s);
        void setYearModel(int i);
};

#endif // CAR_H
