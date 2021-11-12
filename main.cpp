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
    int  liczba, x, suma, sc ;

    // wyswietlenie kominikatu proszacego o podanie dlugosci ciagu - x
    cout << "podaj jak dlugi chcsz ciag (a1=1, r=1): ";

    // wprowadzenie wartosci x
    cin >> x;

    // petla uniemozliwiajaca wprowadzenie dlugosci ciagu < 1
    while( x<1 )
        {
            cout << "podano zla wartosc, sprobuj ponownie ";
            cin >> x;
        }

    // wzór na sume wyrazów ciagu
    sc = ((1+x)/2)*x;

    // utworzenie tablicy dynamicznej
    int *tab= new int[x];

    // wyswietlenie zadanego ciagu
    cout<<"to jest twoj ciag"<< endl;

    for(int i=1; i < x+1 ; i++)
        {
            cout<< i << " ";
        }

    // komunikat proszacy o podanie liczby k
    cout << "\n" << "podaj liczbe : ";

    // wprowadzenie liczby
    cin  >> liczba;

    // jezeli dana liczba jest mniejsza od 1, to najkrotszym ciagiem bedzie jednoelementowy ciag a(liczba)=1
    if(liczba<0) cout << "1"  << endl;

    // jezeli liczba miesci sie w zakresie <0, x-1>, wyswietlenie jednoelementowego ciagu a(n)=liczba+1
    else if(liczba>=0 && liczba<=x-1)
        {
            cout << "\n" << "najkrotszy ciag to :" << liczba+1 << endl; ;
        }

    // je¿eli liczba jest wieksza od sumy wyrazów zadanego ciagu, wyswietlenie komunikatu o braku rozwiazania
    else if ( liczba > sc) cout << "Brak podtablic spelniajacych zadane warunki ";

    // w przeciwnym wypadku
    else
        {
          // wprowadzenie pomocniczej zmiennej j
          int j;

            //ustawiam poczatkowa sume jako 0
            suma = 0;

            // dopoki liczba jest wieksza od wartosci "suma", dodawanie do niej kolejnych elementow zbioru (od konca)
            // oraz wyswietlanie ich w postaci ciagu wyjsciowego

               for(j=x; j>0; j--)
              {

                cout << j << " ";

                suma += j;

                if(suma>liczba)break;
                }

            // kontrolne wyswietlenie sumy ciagu wyjsciowego
            cout << "\n suma wynosi :" << suma;
        }
    return 0;
}
