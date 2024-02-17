/*
Pentru un număr natural dat n, se numește factorialul lui n și se notează n! următoarea expresie: 1*2*3*...*n. Prin definiție, 0!=1.

Să se scrie o funcție C++ recursivă care returnează factorialul unui număr dat ca parametru.

Restricţii şi precizări
numele funcției scrise este factorial
funcția are un parametru, n, număr natural, n≤10
Exemplu
factorial(4) este 24.

Important
Soluția propusă va conține doar funcția cerută. Introducerea în soluție a altor instrucțiuni poate duce la erori de compilare sau de execuție, care vor duce la depunctarea soluției.
*/
int factorial(unsigned int n)
{
  if(n>=2)
  {
    return factorial(n-1)*n;
  }
  return 1;
}
