/*
Se dă un șir de n cuvinte, fiecare format din cel mult 30 caractere.

Cerinţa
Să se determine numărul cuvintelor care conțin doar vocale.

Date de intrare
Fişierul de intrare doarvocale.in conţine pe prima linie numărul n, iar pe n următoarele n linii câte un cuvânt.

Date de ieşire
Fişierul de ieşire doarvocale.out va conţine pe prima linie numărul X, reprezentând numărul cuvintelor care conțin doar vocale.

Restricţii şi precizări
0 < n ≤ 1000
cuvintele vor conține doar litere mici ale alfabetului englez
se consideră vocale caracterele din mulțimea {a,e,i,o,u}
Exemplu:
doarvocale.in

5
creion
lemn
ou
ea
voce
doarvocale.out

2
Explicație
Sunt 2 cuvinte formate doar din vocale: ou, ea.
*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    ifstream fin("doarvocale.in");
    ofstream fout("doarvocale.out");
    int n;
    fin>>n;
    int x=0,ok;
    char s[31];
    for(;n;n--)
    {
        fin>>s;
        ok=1;
        for(int i=0;s[i]&&ok==1;i++)
            if(!strchr("aeiou",s[i]))
        	{
            	ok=0;
        	}
        if(ok)
            x++;
    }
    fout<<x;
    return 0;
}