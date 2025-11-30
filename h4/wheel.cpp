#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int, string) {}

int Wheel::getSize() {
    return size;
}

void Wheel::setSize(int i) {
    size = i;
}

string Wheel::getType() {
    return type;
}

void Wheel::setType(string s) {
    type = s;
}
