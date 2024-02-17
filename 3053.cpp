/*
Cerința
Se dă un număr natural n. Să se determine paritatea lui. Dacă numărul este par se afișează Par, altfel se afișează Impar.

Date de intrare
Fișierul de intrare evenoddxxl.in conține pe prima linie numărul n.

Date de ieșire
Fișierul de ieșire evenoddxxl.out va conține pe prima linie Par sau Impar, după caz.

Restricții și precizări
n are cel mult 1000 de cifre
Exemplu:
evenoddxxl.in

5
evenoddxxl.out

Impar

*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream fin("evenoddxxl.in");
    ofstream fout("evenoddxxl.out");
    char sir[1001];
    fin.get(sir,1001);
    if(strchr("02468",sir[strlen(sir)-1]))
        fout<<"Par";
    else
        fout<<"Impar";
    return 0;
}