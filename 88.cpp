/*
Un cuvânt este palindrom dacă se citește la fel în ambele direcții. De exemplu, capac este palindrom.

Cerinţa
Să se scrie un program care citește mai multe cuvinte și determină despre fiecare dacă este palindrom.

Date de intrare
Fișierul de intrare palindrom.in conține pe prima linie un număr natural n, iar pe următoarele n linii câte un cuvânt alcătuit din litere mici ale alfabetului englez.

Date de ieşire
Fișierul de ieșire palindrom.out va conține n linii. Linia i va conține valoarea 1 dacă pe linia i+1 din fișierul de intrare se află un palindrom, și 0 în caz contrar.

Restricţii şi precizări
0 < n < 100
fiecare cuvânt va conține cel mult 20 de caractere.
Exemplu:
palindrom.in

4
capac
copil
aerisirea
aerare
palindrom.out

1
0
1
0

*/
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");
bool verif_palindrom(char s[])
{
  for(int i=0,j=strlen(s)-1;i<=j-1;i++,j--)
  {
    if(s[i]!=s[j])
    {
      return 0;
    }
  }
  return 1;
}
int n;
char x[21];
int main()
{
  fin>>n;
  for(int i=0;i<=n-1;i++)
  {
    fin>>x;
    fout<<verif_palindrom(x)<<endl;
  }
  return 0;
}