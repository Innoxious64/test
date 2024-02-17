/*
Să se scrie o funcție C++ recursivă care returnează cel mai mare divizor comun a două numere transmise ca parametri.

Restricţii şi precizări
numele funcției scrise este cmmdc;
funcția are doi parametri, numere naturale nenule mai mici decât 1.000.000.000.
Exemplu
cmmdc(18 , 24) este 6.

Important
Soluția propusă va conține doar funcția cerută. Introducerea în soluție a altor instrucțiuni poate duce la erori de compilare sau de execuție, care vor duce la depunctarea soluției.
*/
int cmmdc(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    return cmmdc(max(a,b)-min(a,b),min(a,b));
}