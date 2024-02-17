/*
Cerinţa
Să se scrie o funcție C++ recursivă care determină suma cifrelor unui număr natural n transmis ca parametru și întoarce rezultatul prin intermediul unui parametru de ieșire.

Restricţii şi precizări
numele funcției va fi sumcif
funcția are un doi parametri, n, număr natural, și s, prin intermediul căruia se întoarce rezultatul
ordinea celor doi parametri este n, s
numărul n pentru care se calculează suma cifrelor va fi mai mic decât 2.000.000.000
Important
Soluţia propusă va conţine doar definiţia funcţiei cerute. Prezenţa în soluţie a altor instrucţiuni poate duce erori de compilare sau de execuţie care vor avea ca efect depunctarea soluţiei.
*/
void sumcif(int n,int &s)
{
    if(n==0)
        s=0;
    else
    {
        sumcif(n/10,s);
        s+=n%10;
    }
}