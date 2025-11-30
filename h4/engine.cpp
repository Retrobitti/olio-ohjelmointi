#include "engine.h"

Engine::Engine() {}

Engine::Engine(int, double) {}

int Engine::getHorsepower() {
    return horsepower;
}

void Engine::setHorsepower(int i) {
    horsepower = i;
}

double Engine::getDisplacement() {
    return displacement;
}

void Engine::setDisplacement(double d) {
    displacement = d;
}
