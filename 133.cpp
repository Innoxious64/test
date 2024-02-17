/*
Cerinţa
Scrieți un program care citește de la tastatură două șiruri formate fiecare din cel mult 20 de caractere. Primul șir reprezintă numele unei persoane, iar al doilea șir reprezintă prenumele aceleiași persoane. Atât numele, cât și prenumele sunt formate doar din litere ale alfabetului englez și fiecare conține cel puțin o consoană.

Programul construiește în memorie și afișează pe ecran un al treilea șir de caractere, care va conține consoanele din prenumele citit dispuse în ordinea în care apar în prenume, urmate de exact un spațiu și de numele citit.

Date de intrare
Programul citeşte de la tastatură cele două șiruri.

Date de ieşire
Programul afişează pe ecran șirul construit după regula precizată.

Exemplu:
Intrare

Popescu Vasile
Ieşire

Vsl Popescu

*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[21],p[21],pr[42];
    cin>>n>>p;
    int j=0;
    for(int i=0;i<=strlen(p)-1;i++)
    {
      if(!strchr("AEIOUaeiou",p[i]))
      {
        pr[j++]=p[i];
      }
    }
    pr[j++]=' ';
    pr[j]=0;
    strcat(pr,n);
    cout<<pr;
    return 0;
}