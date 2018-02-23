
#include <cstdlib>
#include"maclasse.h"
using namespace std;

Point::Point(float x, float y) : x(x), y(y) {
}

void Point::deplacer(float dx, float dy) {
    this->x += dx;
    this->y += dy;
}

float Point::abcisse() const {
    return x;
}

float Point::ordonnee() const {
    return y;
}