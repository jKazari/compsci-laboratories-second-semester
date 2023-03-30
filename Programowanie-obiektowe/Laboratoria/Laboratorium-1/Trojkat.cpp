#include "Trojkat.h"
#include <iostream>

using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
    cout << "Konstruktor Trójk¹ta(" << a << "," << b << ", " << c << ")" << endl;
}

double Trojkat::GetA() const {
    return a;
}

double Trojkat::GetB() const {
    return b;
}

double Trojkat::GetC() const {
    return c;
}

void Trojkat::SetA(double a) {
    this->a = a;
}

void Trojkat::SetB(double b) {
    this->b = b;
}

void Trojkat::SetC(double c) {
    this->c = c;
}

double Trojkat::Obwod() {
    return this->a + this->b + this->c;
}

double Trojkat::Pole() {
    double p = (this->a + this->b + this->c) / 2;
    return sqrt(p * (p - this->a) * (p - this->b) * (p - this->c));
}

void Trojkat::Wypisz(std::ostream& out) const {
    cout << "Trójk¹t(" << a << ", " << b << ", " << c << ")";
}

Trojkat::~Trojkat() {
    cout << "Destruktor Trójk¹ta(" << a << "," << b << ", " << c << ")" << endl;
}
