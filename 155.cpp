/*
Cerinţa
Scrieţi un program care citeşte de la tastatură un şir de cel mult 60 de caractere (litere mici şi mari ale alfabetului englez, cifre, puncte, virgule şi spaţii) şi afişează pe ecran cifra care apare de cele mai multe ori în şirul citit.

Date de intrare
Programul citeşte de la tastatură un şir de cel mult 60 de caractere.

Date de ieşire
Programul va afişa pe ecran cifra care apare de cele mai multe ori în şir.

Restricţii şi precizări
dacă şirul conţine mai multe cifre cu număr maxim de apariţii si va afişa cea mai mică
dacă şirul nu conţine cifre se va afişa NU.
Exemplu:
Date de intrare

Voi lua 9,5 la matematica 10 la informatica si 10 la romana
Date de ieşire

0
Explicaţie

Cifrele 0 şi 1 apar de număr maxim de ori, dar 0 este mai mică.
*/
#include <iostream>
using namespace std;

int main()
{
    char s[61];
    cin.get(s,61);
    int v[10]={0};
    for(int i=0;s[i];i++)
        if(isdigit(s[i]))
           v[s[i]-'0']++;
    int cmax=0;
    for(int i=1;i<=9;i++)
    	if(v[i]>v[cmax])
           cmax=i;
    if(v[cmax])
           cout<<cmax;
    else
           cout<<"NU";
    return 0;
}