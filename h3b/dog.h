#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : Animal
{
    public:
        Dog();
        virtual void callOut() override;
};

#endif // DOG_H
