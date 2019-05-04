#ifndef WIELOMIAN_H
#define WIELOMIAN_H

#include <cmath>
#include <iostream>
using namespace  std;
class Wielomian
{
    float* wspolczynnik;
    int stopienWielomianu;
public:
    Wielomian(int n);
    Wielomian(Wielomian& staryWielomian);
    ~Wielomian();
    float &getReferencjeWspolczynnika(int n);
    float  getWspolczynnik(int n) const;
    float wynik(float x);
};

#endif // WIELOMIAN_H
