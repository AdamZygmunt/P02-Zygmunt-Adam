/*Zadanie 14.
Dla zadanego ciagu liczb naturalnych, znajdz dlugosc najkrotszego ciagu,
ktorego suma jest wiesza niz zadana liczba.

Przyklad.
Wejscie: 1, 2, 3, 4, 5, 6, 7, 8, k = 20
Wyjscie: 6, 7, 8

Wejscie: 1, 2, 3, 4, 5, 6, 7, 8, k = 7
Wyjscie: 8

Wejscie: 1, 2, 3, 4, 5, 6, 7, 8, k = 21
Wyjscie: 5, 6, 7, 8

Wejscie: 1, 2, 3, 4, 5, 6, 7, 8, k = 40
Wyjscie: Brak podtablic spelniajacych zadane warunki*/


#include <iostream>

using namespace std;

int main()
{
    /* zadeklarowanie zmiennych: liczba (w tresci zadania k, ale nazwalem "liczba", aby uniknac pomylek),
       x-liczba elementow ciagu, suma - na biezaco bedzie sumowac wyrazy ciagu od konca, sc-suma wszystkich wyrazów ciagu*/

    int  liczba, suma;
    float sc, x=8;

    // wzór na sume wyrazów ciagu
    sc = ((1+x)/2)*x;

    // wyswietlenie zadanego ciagu
    cout<<"to jest twoj ciag"<< endl;

    for(int i=1; i < x+1 ; i++)
        {
            cout<< i << " ";
        }

    // komunikat proszacy o podanie liczby
    cout << "\n" << "podaj liczbe : ";

    // wprowadzenie liczby
    cin  >> liczba;

    // jezeli liczba jest wieksza od sumy wyrazów zadanego ciagu, wyswietlenie komunikatu o braku rozwiazania
    if ( liczba >= sc) cout << "Brak podtablic spelniajacych zadane warunki ";

    // w przeciwnym wypadku
    else
        {
          // wprowadzenie pomocniczej zmiennej j
          int j;

            //ustawiam poczatkowa sume jako 0
            suma = 0;

            // dopoki liczba jest wieksza od wartosci "suma", dodawanie do niej kolejnych elementow zbioru (od konca)
            // oraz wyswietlanie ich w postaci ciagu wyjsciowego;
            // jeżeli suma będzie większa od zadanej liczby, zakończ działanie programu

               for(j=x; j>0; j--)
              {

                cout << j << " ";

                suma += j;

                if(suma>liczba)break;
                }
        }
    return 0;
}
