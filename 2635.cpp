/*
Cerința
Marcel a primit o tastatura noua de ziua lui. El vrea sa scrie un text folosind doar litere ale alfabetului englez si spatii. El a descoperit tasta CapsLock, care atunci cand este apasata se activeaza. Daca tasta este activata, atunci toate literele care le va scrie in continuare, pana in momentul in care tasta este dezactivata (apasand CapsLock inca o data) vor fi majuscule.

Date de intrare
Fișierul de intrare capslock.in conține pe prima linie tastele apasate de Marcel (daca tasta e litera, atunci este codificata prin litera mica a acestia, daca e spatiu atunci va fi codificata printr-un spatiu iar daca e CapsLock va fi codificata prin simbolul #), fara spatii intre ele;

Date de ieșire
Fișierul de ieșire capslock.out va conține pe prima linie textul scris de Marcel.

Restricții și precizări
textul este mai scurt de 255 de caractere
el va apăsa tasta CapsLock de maxim 35 ori
la început tasta CapsLock este dezactivata.
spatiile nu sunt afectate de CapsLock
Exemplu:
capslock.in

#s#alut #marcel
capslock.out

Salut MARCEL
Explicație
Tasta CapsLock devine activa de la început și se dezactivează după tasta s → el a scris majuscula S. Tasta CapsLock se activează și la al 2-lea cuvânt și rămâne activă → restul literelor vor fi majuscule.
*/
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("capslock.in");
    ofstream fout("capslock.out");
    char s[256];
    fin.get(s,256);
    int cl=0;
    for(int i=0;s[i];i++)
        if(s[i]=='#')
            cl=!cl;
        else
        {
            if(cl)
                s[i]=toupper(s[i]);
            fout<<s[i];
        }
    return 0;
}
