/*
Cerința
Se dau două mulțimi de numere naturale. Să se afișeze reuniunea și intersecția lor.

Date de intrare
Programul citește de la tastatură, în ordine:

numărul n de elemente ale primei mulțimi
n numere naturale diferite, ordonate crescător, reprezentând elementele primei mulțimi
numărul m de elemente ale celei de-a doua mulțimi
m numere naturale diferite, ordonate crescător, reprezentând elementele celei de-a doua mulțimi
Date de ieșire
Programul va afișa pe ecran elementele reuniunii celor două mulțimi, în ordine crescătoare, separate prin exact un spațiu, iar pe rândul următor elementele intersecției celor două mulțimi, în ordine crescătoare, separate de asemenea prin exact un spațiu.

Restricții și precizări
1 ≤ n , m ≤ 100.000
elementele celor două mulțimi vor fi mai mici decât 1.000.000.000
cele două mulțimi date au cel puțin un element comun
Exemplu:
Intrare

5
3 6 8 9 12
7
2 5 6 7 8 9 11
Ieșire

2 3 5 6 7 8 9 11 12 
6 8 9 

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<=m-1;i++)
    {
        cin>>b[i];
    }
    /// UN FEL DE INTERCLASARE - REUNIUNEA MULTIMILOR
    int i=0,j=0;
    while(i<=n-1&&j<=m-1)
    {
        if(a[i]<b[j])
            cout<<a[i++]<<" ";
        else if(a[i]>b[j])
            cout<<b[j++]<<" ";
        else if(a[i]==b[j])
        {
            cout<<b[j++]<<" ";
            i++;
        }
    }
    while(i<=n-1)
        cout<<a[i++]<<" ";
    while(j<=m-1)
        cout<<b[j++]<<" ";
    cout<<endl;
    /// UN ALT FEL DE INTERSECTIA - MODIFICARE INTERSORTARE
    i=0,j=0;
    while(i<=n-1&&j<=m-1)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            cout<<a[i++]<<" ";
            j++;
        }
    }
    return 0;
}
