/*
Cerința
Se dă o propoziție formată din litere mari și mici ale alfabetului englez, cifre, spații și semne de punctuație, în care literele mari și mici se consideră identice. Determinați vocala din șir cu număr maxim de apariții.

Date de intrare
Programul citește de la tastatură un șir de caractere.

Date de ieșire
Programul va afișa pe ecran vocala determinată, literă mare.

Restricții și precizări
șirul citit va avea cel mult 255 caractere
dacă în șir există mai multe vocale cu număr maxim de apariții, se va afișa prima în ordine alfabetică
vocalele sunt AEIOUaeiou
Exemplu:
Intrare

Ana are 5 mere si trei nuci
Ieșire

E

*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.get(s,256);
    char v[]="AEIOU";
    int f[5]={0};
    for(int i=0;s[i];i++)
    {
        char *p=strchr(v,toupper(s[i]));
        if(p)
            f[p-v]++;
    }
    int vmax=0;
    for(int i=1;i<=4;i++)
        if(f[i]>f[vmax])
            vmax=i;
    cout<<v[vmax];
    return 0;
}