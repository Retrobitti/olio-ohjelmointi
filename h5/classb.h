#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB
{
private:
    string info;
public:
    ClassB();
    void setInfo(string);
    string getInfo();
};

#endif // CLASSB_H
