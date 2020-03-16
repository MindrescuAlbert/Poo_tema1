/*
     Mîndrescu Albert-Codrin
     Grupa 134
     Tema 7 - Stiva de caractere
*/

#include "Stiva_de_caractere.h"
#include <iostream>
#include <cstring>

Stiva_de_caractere::Stiva_de_caractere()
{
    top = NULL;
}

Stiva_de_caractere::~Stiva_de_caractere()
{
    Nod* p;
    while(top != NULL)
    {
        p = top->GetNext();
        delete top;
        top = p;
    }
}

Nod* Stiva_de_caractere::GetTop() const
{
    return top;
}

void Stiva_de_caractere::push(const char& value)
{
    Nod* x = new Nod(value, top);
    top = x;
}

void Stiva_de_caractere::pop()
{
    Nod *p;
    if(top != NULL)
    {
        p = top->GetNext();
        delete top;
        top = p;
    }
}

void Stiva_de_caractere::afisareTop() const
{
    if(top != NULL)
        std::cout << top->GetInfo() << " ";
    else
        std::cout << "Stiva este goala ";
}

const bool Stiva_de_caractere::isEmpty() const
{
    if(top != NULL)
        return 0;
    else
        return 1;
}

istream& operator >> (istream& in, Stiva_de_caractere& s)
{
    Nod* p;
    Nod* copie_top;
    copie_top = s.top;
    while(copie_top != NULL)
    {
        p = copie_top->GetNext();
        delete copie_top;
        copie_top = p;
    }

    s.top = NULL;

    int n;
    char x;
    in >> n;
    for(int i = 1; i <= n; i++)
    {
        in >> x;
        s.push(x);
    }
    return in;
}

ostream& operator << (ostream& out, Stiva_de_caractere& s)
{
    Nod* p;
    Nod* copie_top;
    copie_top = s.top;
    while(copie_top != NULL)
    {
        p = copie_top->GetNext();
        out << copie_top->GetInfo() << " ";
        delete copie_top;
        copie_top = p;
    }
    s.top = NULL;
    return out;
}

void Inversare(char* sir, Stiva_de_caractere& s)
{
    int n, i;
    n = strlen(sir);
    for(i = 0; i < n; i++)
        s.push(sir[i]);
    for(i = 0; i < n; i++)
        {
            sir[i] = s.top->GetInfo();
            s.pop();
        }
}

Stiva_de_caractere& Stiva_de_caractere::operator - (Stiva_de_caractere& s2)
{
    Stiva_de_caractere* s_rezultat = new Stiva_de_caractere();
    Stiva_de_caractere s3;
    while (top != NULL && s2.top != NULL)
        { if(top->GetInfo() > s2.top->GetInfo())
              {
             //     cout << top->GetInfo() << " ";
                  s3.push(top->GetInfo());
                  pop();
                  s2.pop();
              }
          else
              {
               //   cout << s2.top->GetInfo() << " ";
                  s3.push(s2.top->GetInfo());
                  pop();
                  s2.pop();
              }
        }
    while(s3.top != NULL)
    {
        s_rezultat->push(s3.top->GetInfo());
        s3.pop();
    }
    return *s_rezultat;
}

void Read(int n, Stiva_de_caractere stive[])
{
    int nr_caract;
    char x;
    //cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> nr_caract;
        for(int j = 1; j <= nr_caract; j++)
        {
            cin >> x;
            stive[i].push(x);
        }
    }
}


void Write(int n, Stiva_de_caractere stive[])
{
    int nr_caract;
    char x;

    for(int i = 1; i <= n; i++)
    {
        cout << "\n";
        Nod *p = stive[i].top;
        while(p != NULL)
        {
            cout << p -> GetInfo();
            p = p -> GetNext();
        }
    }
}
