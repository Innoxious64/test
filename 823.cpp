/*
Cerinţa
Să se scrie o funcție C++ recursivă care să returneze suma cifrelor unui număr natural transmis ca parametru.

Restricţii şi precizări
numele funcției va fi sumcif
funcția va avea un parametru reprezentând numărul dat
numărul pentru care se calculează suma cifrelor va fi mai mic decât 2.000.000.000
Exemplu
sumcif(2050) este 7.

Important
Soluţia propusă va conţine doar definiţia funcţiei cerute. Prezenţa în soluţie a altor instrucţiuni poate duce erori de compilare sau de execuţie care vor avea ca efect depunctarea soluţiei.
*/
#include <iostream>
using namespace std;
int sumcif(int n)
{
    if(n==0)
    	return 0;
    else
        return sumcif(n/10)+n%10;
}