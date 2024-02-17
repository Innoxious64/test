/*
Cerinţa
Să se scrie un program care citește un șir de caractere și afișează litera mică cel mai des întâlnită în șir.

Date de intrare
Programul citește de la tastatură un șir de cel mult 255 caractere.

Date de ieşire
Programul afișează pe ecran litera mică cel mai des întâlnită în șir.

Restricţii şi precizări
șirul conține litere mari și mici ale alfabetului englez, cifre și spații
dacă șirul conține mai multe litere cu număr maxim de apariții, se va fișa prima în ordine alfabetică
Exemplu:
Intrare

In 12 mergem la munte
Ieșire

e
Explicație
Litera e apare în șir de 3 ori. Tot de 3 ori apare și litera m, dar e este prima în ordine alfabetică.
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.get(s,256);
    int v['z'-'a'+1]={0};
    for(int i=0;i<=strlen(s)-1;i++)
        v[s[i]-'a']++;
    int max=0;
    char lmax='-';
    for(int i=0;i<='z'-'a';i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            lmax=i+'a';
        }
    }
    cout<<lmax;
    return 0;
}