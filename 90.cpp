/*
Cerinţa
Să se scrie un program care citește mai multe propoziții și determină propoziția cu cele mai multe vocale.

Date de intrare
Fișierul de intrare vocmax.in conține pe prima linie un număr natural n, iar pe următoarele n linii câte o propoziție alcătuită din litere mici ale alfabetului englez și spații.

Date de ieşire
Fișierul de ieșire vocmax.out va conține pe prima linie propoziția cu cele mai multe vocale.

Restricţii şi precizări
0<n<100
fiecare propoziție va conține cel mult 250 de caractere
dacă sunt mai multe propoziții cu număr maxim de vocale se poate afișa oricare
Exemplu:
vocmax.in

4
somnoroase pasarele
pe la cuiburi se aduna
se ascund in ramurele
noapte buna
vocmax.out

pe la cuiburi se aduna

*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int nrvoc(char s[])
{
    int voc=0;
    for(int i=0;s[i];i++)
        if(strchr("aeiou",s[i]))
            voc++;
    return voc;
}
int main()
{
    ifstream fin("vocmax.in");
    ofstream fout("vocmax.out");
    int n;
    fin>>n;
    fin.get();
    // Punere prima propozitie ca fiind propozitia cu cele mai multe vocale
    char smax[251];
    fin.getline(smax,251);
    // Compararea celorlalte propozitii cu prima propozitile dinaintea ei
    char s[251];
    for(int i=1;i<=n-1;i++)
    {
        fin.getline(s,251);
        if(nrvoc(s)>nrvoc(smax))
            strcpy(smax,s);
    }
    fout<<smax;
    return 0;
}