#include "classa1.h"
#include "classa2.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    int* pointerA = &a;
    int &refA = a;

    //refA = b;
    //pointerA = &b;

    cout << "a:n arvo on: " << a << " ja sen osoite on: " << &a << endl;
    cout << "pointterin osoittama osoite on: " << pointerA << " pointterin osoittama arvo on: " << *pointerA <<endl;
    cout << "refA osoittama osoite on: " << &refA << " refA osoittama arvo on: " << refA <<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
