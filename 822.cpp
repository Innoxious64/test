/*
#822 NrCifreZeroRec
Cerinţa
Să se scrie o funcție C++ recursivă care să returneze numărul de cifre egale cu zero ale unui număr natural transmis ca parametru.

Restricţii şi precizări
numele funcției va fi nr_cif_zero
funcția va avea un parametru reprezentând numărul dat
numărul pentru care se calculează numărul de cifre egale cu zero va fi mai mic decât 2.000.000.000
Exemplu
nr_cif_zero(2050) este 2.

Important
Soluţia propusă va conţine doar definiţia funcţiei cerute. Prezenţa în soluţie a altor instrucţiuni poate duce erori de compilare sau de execuţie care vor avea ca efect depunctarea soluţiei.
*/
int nr_cif_zero(int n)
{
    if(n%10==n)
        if(n==0)
            return 1;
        else
            return 0;
    else
        if(n%10==0)
            return nr_cif_zero(n/10)+1;
        else
            return nr_cif_zero(n/10);
}