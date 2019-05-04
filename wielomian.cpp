#include "wielomian.h"

Wielomian::Wielomian(int n)
{
    stopienWielomianu=n;
    wspolczynnik = new float[stopienWielomianu];
    for(int i=0;i<stopienWielomianu;i++)
    {
        cout<<"Podaj wspolczynik "<<i+1<<" !";
        cin>>wspolczynnik[i];
    }
}
Wielomian::~Wielomian()
{
    delete[] wspolczynnik;
}
Wielomian::Wielomian(Wielomian& staryWielomian)
{
    stopienWielomianu=staryWielomian.stopienWielomianu;
    wspolczynnik = new float[stopienWielomianu];
    for(int i=0; i<stopienWielomianu;i++)
    {
        wspolczynnik[i]=staryWielomian.wspolczynnik[i];
    }
}
float& Wielomian::getReferencjeWspolczynnika(int n)
{
    if(!(stopienWielomianu<=n))
    {
        float* noweWspolczynniki=new float[n];
        for(int i=0; i<stopienWielomianu;i++)
        {
            noweWspolczynniki[i]=wspolczynnik[i];
        }
        stopienWielomianu=n;
        delete [] wspolczynnik;
        wspolczynnik=noweWspolczynniki;
    }
    return wspolczynnik[n];
}
float  Wielomian::getWspolczynnik(int n) const
{
    if(stopienWielomianu<n)
    {
        return 0;
    }
    return wspolczynnik[n];
}
float Wielomian::wynik(float x)
{
    float wynik = 0;
    for(int i=0;i<stopienWielomianu;i++)
    {
        wynik+=wspolczynnik[i]*pow(x,i);
    }
    return wynik;
}
