/*
     Mîndrescu Albert-Codrin
     Grupa 134
     Tema 7 - Stiva de caractere
*/

#include <iostream>
#include "Nod.h"
#include "Stiva_de_caractere.h"

using namespace std;

int main()
    Nod x;
    Nod y('c');
    Nod w('a', &y);
    Nod t(w);
    cout << t.GetInfo() << " ";

    Stiva_de_caractere s;
    s.push('5');
    s.push('a');
    s.pop();
    s.push('2');
    s.push('1');
    s.pop();
    s.pop();
    s.pop();
    s.afisareTop(); //d
    cin >> s;
    cout << s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    char sir[5] = "abcd";
    Stiva_de_caractere s2;
    s2.push('z');
    s2.push('w');
    s2.push('a');
    Inversare(sir, s);
    cout << s - s2;

    Stiva_de_caractere my_vect[4];
    Read(3, my_vect);
    Write(3, my_vect);
    return 0;
}
