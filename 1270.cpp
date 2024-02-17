/*
Cerința
Se dă un număr natural în baza 16. Să se transforme acest număr în baza 10.

Date de intrare
Programul citește de la tastatură numărul n în baza 16.

Date de ieșire
Programul va afișa pe ecran numărul n transformat în baza 10.

Restricții și precizări
reprezentarea în baza 10 a numărului dat este mai mică decât 2.000.000.000
Cifrele în baza 16 sunt : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F.
Exemplu:
Intrare
100
Ieșire
256

*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    char b16[9];
    int m=0;
    cin>>b16;
    for(int i=strlen(b16)-1;i>=0;i--)
    {
        if(isdigit(b16[i]))
        {
            m+=pow(16,strlen(b16)-1-i)*(b16[i]-'0');
        }
        else
        {
            m+=pow(16,strlen(b16)-1-i)*(b16[i]-'A'+10);
        }
    }
    cout<<m;
    return 0;
}