/*
Pentru un număr natural dat n, se numește factorialul lui n și se notează n! următoarea expresie: 1*2*3*...*n. Prin definiție, 0!=1.

Să se scrie o funcție C++ recursivă care determină factorialul unui număr transmis ca parametru și întoarce rezultatul prin intermediul unui parametru de ieșire.

Restricţii şi precizări
numele funcției scrise este factorial
funcția are un doi parametri, n, număr natural, n≤10, și parametrul f, prin intermediul căruia se întoarce rezultatul
ordinea celor doi parametri este n, f
Important
Soluția propusă va conține doar funcția cerută. Introducerea în soluție a altor instrucțiuni poate duce la erori de compilare sau de execuție, care vor duce la depunctarea soluției.
*/
void factorial(int n,int &f)
{
  if(n>=2)
  {
    factorial(n-1,f);
    f=f*n;
  }
  else
  {
    f=1;
  }
}
