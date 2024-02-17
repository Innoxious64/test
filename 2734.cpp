/*
Cerința
Se citește un șir cu n elemente, numere întregi. Să se șteargă elementele care se repetă, păstrându-se doar primul de la stânga la dreapta.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere întregi, separate prin spații.

Date de ieșire
Programul va afișa pe ecran elementele șirului prelucrat cu spații intre ele.

Restricții și precizări
1 ≤ n ≤ 1000
valoarea absolută a elementelor șirului va fi mai mică decât 1.000.000.000
Exemplu:
Intrare

6
1 2 3 2 4 5
Ieșire

1 2 3 4 5

*/
#include <iostream>
using namespace std;
void citire(int n,int s[])
{
  for(int i=0;i<=n-1;i++)
  {
    cin>>s[i];
  }
}
void afisare(int n,int s[])
{
  for(int i=0;i<=n-1;i++)
  {
    cout<<s[i]<<" ";
  }
  cout<<endl;
}
// aducem elementele mai la stanga , incepand cu pozitia a
void inlocuire(int a,int &n,int s[])
{
  for(int i=a;i<=n-2;i++)
  {
    s[i]=s[i+1];
  }
  n--;
}
int main()
{
    int n;
    cin>>n;
    int s[n];
    citire(n,s);
    for(int i=0;i<=n-2;i++)
    {
      for(int j=i+1;j<=n-1;j++)
      {
        if(s[i]==s[j])
        {
          inlocuire(j,n,s);
          j--;
        }
      }
    }
    afisare(n,s);
    return 0;
}
