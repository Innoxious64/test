/*
Cerința
Scrieți funcția recursivă cu antetul

long long SumProdRec(int n)
care primind ca parametru un număr natural nenul n, returnează valoarea sumei 1•2 + 2•3 + ... (n-1)•n.

Restricții și precizări
2 ≤ n ≤ 10.000
Numele funcției este SumProdRec.
Se recomandă utilizarea recursivității în rezolvarea problemei.
Exemplu:
SumProdRec(4) = 20.

Important
Soluția propusă va conține doar funcția cerută. Introducerea în soluție a altor instrucțiuni poate duce la erori de compilare sau de execuție, care vor duce la depunctarea soluției.
*/
long long SumProdRec(int n)
{
  if(n>=3)
  {
    return SumProdRec(n-1)+n*(n-1);
  }
  return 1*2;
}
