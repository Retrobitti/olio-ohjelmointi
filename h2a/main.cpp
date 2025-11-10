
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    cout << "CAR" << endl;

    Car car;

    car.setBrand("Innocenti");
    car.setModel("Mini");
    car.setYearModel(1967);
    car.printData();

    Rectangle *rectangle = new Rectangle;

    rectangle->setWidth(2.5);
    rectangle->setHeight(3);

    cout << "RECTANGLE" << endl;
    cout << "Area: " << rectangle->getArea() << endl;
    cout << "Circum: " << rectangle->getCircum() <<endl;

    delete rectangle;
    rectangle = nullptr;

    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Cass");
    student->setStudentNumber(666);
    student->setAverage(3.8);

    cout << "STUDENT" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Studentnumber: " << student->getStudentNumber() << endl;
    cout << "Average grade: " << student->getAverage() << endl;

    return 0;
}
