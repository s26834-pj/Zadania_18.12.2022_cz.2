#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct uczen 
{
    int indeks;
    string imie;
    string nazwisko;

    bool operator<(const uczen& a) const
    {
        return indeks < a.indeks;
    }
};

int main() 
{
    int a;

    cout << "Podaj liczbe uczniow: " << endl;
    cin >> a;
    
    vector <uczen> tab(a);

    for (int i = 0; i < a; i++) 
    {
        cout << endl;
        cout << "Podaj indeks ucznia " << i + 1 << ": ";
        cin >> tab[i].indeks;
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> tab[i].imie;
        cout << "Podaj nazwisko ucznia " << i + 1 << ": ";
        cin >> tab[i].nazwisko;
    }

    cout << endl;
    cout << "Wektor przed sortowaniem: " << endl;

    for (int i = 0; i < a; i++) {
        cout << tab[i].indeks << "  " << tab[i].imie << "  " << tab[i].nazwisko << endl;
    }

    sort(tab.begin(), tab.end());

    cout << endl;
    cout << "Wektor posortowany: " << endl;

    for (int i = 0; i < a; i++) {
        cout << tab[i].indeks << "  " << tab[i].imie << "  " << tab[i].nazwisko << endl;
    }

    return 0;
}