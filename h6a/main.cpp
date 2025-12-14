#include "myclass.h"
#include <QCoreApplication>


using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MyClass myObject;              // ✅ create object
    myObject.raiseMySignal();       // optional call

    return app.exec();
}
