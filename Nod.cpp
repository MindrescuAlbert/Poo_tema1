/*
     Mîndrescu Albert-Codrin
     Grupa 134
     Tema 7 - Stiva de caractere
*/

#include "Nod.h"
#include <iostream>

Nod::Nod()
{
    info = 0;
    next = NULL;
}

Nod::Nod(const char& value, Nod* nextt)
{
    info = value;
    next = nextt;
}

Nod::Nod(const char& value)
{
    info = value;
    next = NULL;
}

Nod::Nod(const Nod& nod)
{
    info = nod.info;
    next = nod.next;
}

Nod::~Nod()
{
    next = NULL;
}

const char& Nod::GetInfo() const
{
    return info;
}

void Nod::SetInfo(const char& value)
{
    info = value;
}

Nod* Nod::GetNext()
{
    return next;
}

void Nod::SetNext(Nod* toSet)
{
    next = toSet;
}
