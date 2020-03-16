/*
     Mîndrescu Albert-Codrin
     Grupa 134
     Tema 7 - Stiva de caractere
*/

#ifndef STIVA_DE_CARACTERE_H
#define STIVA_DE_CARACTERE_H
#include "Nod.h"
#include <istream>
#include <ostream>

using namespace std;

class Stiva_de_caractere
{
public:
    Stiva_de_caractere();
    ~Stiva_de_caractere();

    Nod* GetTop() const;

    void push(const char& value);
    void pop();
    void afisareTop() const;
    const bool isEmpty() const;
    friend istream& operator >> (istream& in, Stiva_de_caractere& s);
    friend ostream& operator << (ostream& out, Stiva_de_caractere& s);
    friend void Inversare(char* sir, Stiva_de_caractere& s);
    Stiva_de_caractere& operator - (Stiva_de_caractere& s2);
    friend void Read(int n, Stiva_de_caractere stive[]);
    friend void Write(int n, Stiva_de_caractere stive[]);

private:
    Nod* top;
};

#endif // STIVA_DE_CARACTERE_H
