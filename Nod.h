/*
     Mîndrescu Albert-Codrin
     Grupa 134
     Tema 7 - Stiva de caractere
*/

#ifndef NOD_H
#define NOD_H

class Nod
{
public:
    Nod();
    Nod(const char& value);
    Nod(const char& value, Nod* nextt);
    Nod(const Nod& nod);
    ~Nod();

    const char& GetInfo() const;
    void SetInfo(const char& value);
    Nod* GetNext();
    void SetNext(Nod* toSet);

private:
    char info;
    Nod* next;
};

#endif // NOD_H
