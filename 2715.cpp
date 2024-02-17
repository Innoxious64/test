/*
Laura vrea să vă scrie un șir de caractere pe care numai ea îl cunoaște. Realizează însă că, dacă l-ar scrie așa, pur și simplu, alte persoane ar putea să îl vadă și să îl înțeleagă, lucru care o îngrijorează. Astfel, fata află despre cum poate ascunde acest mesaj folosind codificarea în ROT13.

Codificarea în ROT13 a unui text cere o examinare a caracterelor alfabetului și înlocuirea fiecărei litere cu litera care se află cu 13 poziții în fața ei în alfabet. De exemplu, A devine N, M devine Z, N devine A ș.a.m.d.



Cerința
Laura vă va da un text codificat. Aflați conținutul acestuia!

Date de intrare
Programul citește de la tastatură un șir de caractere, reprezentând textul codificat.

Date de ieșire
Programul va afișa pe ecran un alt șir de caractere, reprezentând textul decodificat.

Restricții și precizări
1 ≤ strlen(șir inițial) ≤ 106
;
Șirul va conține doar litere mici și mari ale alfabetului englez, precum și spații.
Exemplu:
Intrare

Cbg qrpbqvsvpn gbghy va yvzvgn qr gvzc
Ieșire

Pot decodifica totul in limita de timp
Explicație
C↔P, b↔o, g↔t, ...
*/
#include <iostream>
using namespace std;
int main()
{
    char x;
    while(cin.get(x))
    {
        if(isalpha(x))
            if(islower(x))
                if(islower(x-13))
                    x-=13;
                else
                    x+=13;
            else
                if(isupper(x-13))
                    x-=13;
                else
                    x+=13;
        cout<<x;
    }
}
