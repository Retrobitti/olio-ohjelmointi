#ifndef CHEF_H
#define CHEF_H

#include <string>
using std::string;
class Chef
{
    public:
        Chef(string s);
        ~Chef();
        void makeSalad();
        void makeSoup();
    protected:
        string name;
};

#endif // CHEF_H
