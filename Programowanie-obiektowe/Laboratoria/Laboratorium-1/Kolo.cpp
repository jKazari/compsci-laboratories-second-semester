#define _USE_MATH_DEFINES

#include "Kolo.h"
#include <iostream>
#include <math.h>

using namespace std;

Kolo::Kolo(double r) : r(r) {
    cout << "Konstruktor Ko�a(" << r << ")" << endl;
}

double Kolo::GetR() const {
    return r;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::Obwod() {
    return 2 * M_PI * this->r;
}

double Kolo::Pole() {
    return M_PI * this->r * this->r;
}

void Kolo::Wypisz(std::ostream& out) const {
    cout << "Ko�o(" << r << ")";
}

Kolo::~Kolo() {
    cout << "Destruktor Ko�a(" << r << ")" << endl;
}
