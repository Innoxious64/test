/*
Cerinţa
Scrieţi un program care citește de la tastatură un număr natural, n (n∈[2,20]), apoi n numere naturale din intervalul [0,104], reprezentând, de la stânga la dreapta, în această ordine, valorile elementelor aflate pe prima linie a unui tablou bidimensional cu n linii și n coloane. Programul construiește în memorie tabloul, inițializând celelalte elemente, astfel încât fiecare linie să se obțină prin permutarea circulară a elementelor liniei
anterioare, de la stânga spre dreapta, cu o poziție.

Programul afişează pe ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele de pe aceeași linie fiind separate prin câte un spațiu.

Date de intrare
Programul citește de la tastatură numărul n și cele n numere.

Date de ieşire
Programul afișează pe ecran tabloul construit, câte o linie a matricei pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu.

Restricţii şi precizări
2 ≤ n ≤ 20
Exemplu:
Intrare

4
1 1 3 2
Ieșire

1 1 3 2 
2 1 1 3 
3 2 1 1 
1 3 2 1 

*/
#include <iostream>
using namespace std;
// citește prima linie a coloanei
void citire_linia0(int n,int t[20][20])
{
  for(int i=0;i<=n-1;i++)
  {
    cin>>t[0][i];
  }
}
void generare(int n,int t[][20])
{
  for(int i=1;i<=n-1;i++)
  {
    for(int j=1;j<=n-1;j++)
    {
      t[i][j]=t[i-1][j-1];
    }
    t[i][0]=t[i-1][n-1];
  }
}
void afisare(int n,int t[][20])
{
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<=n-1;j++)
    {
      cout<<t[i][j]<<" ";
    }
    cout<<endl;
  }
}
int n,t[20][20];
int main()
{
  cin>>n;
  citire_linia0(n,t);
  generare(n,t);
  afisare(n,t);
  return 0;
}
