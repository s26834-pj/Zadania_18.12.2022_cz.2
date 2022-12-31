#include<iostream>

using namespace std;

struct uczen
{
	char imie[12];
	int informatyka, matematyka, biologia, j_polski;
};

int main()
{
	uczen tablica[6];

	for (int i = 0; i < 6; i++)
	{
		cout << "Podaj imie ucznia nr " << i + 1 << ": ";
		cin >> tablica[i].imie;
		cout << "Podaj ocene z informatyki: ";
		cin >> tablica[i].informatyka;
		cout << "Podaj ocene z matematyki: ";
		cin >> tablica[i].matematyka;
		cout << "Podaj ocene z biologii: ";
		cin >> tablica[i].biologia;
		cout << "Podaj ocene z j. polskiego: ";
		cin >> tablica[i].j_polski;
	}

	int liczba_zapytan;
		cout << "Podaj liczbe zapytan: ";
	cin >> liczba_zapytan;

	int nr, przedmiot;
	
	while (liczba_zapytan--)
	{
		cout << "Podaj nr ucznia [1.." << 6 << "]: ";
		cin >> nr;
		--nr;
		if ((nr < 0) || (nr >= 6))
		{
			cout << "W systemie brak ucznia o podanym numerze. Podaj cyfre od 1 do 6 " << endl;
			continue;
		}
		cout << "Podaj nr przedmiotu [0..3]: ";
		cin >> przedmiot;
		if ((przedmiot < 0) || (przedmiot>3))
		{
			cout << "W systemie brak przedmiotu o podanym numerze. Podaj cyfre od 0 do 3 " << endl;
			continue;
		}

		switch (przedmiot)
		{
		case 0:
			cout << "Uczen: " << tablica[nr].imie << ", ocena z informatyki: "
				<< tablica[nr].informatyka << endl;
			break;
		case 1:
			cout << "Uczen: " << tablica[nr].imie << ", ocena z matematyki: "
				<< tablica[nr].matematyka << endl;
			break;
		case 2:
			cout << "Uczen: " << tablica[nr].imie << ", ocena z biologii: "
				<< tablica[nr].biologia << endl;
			break;
		case 3:
			cout << "Uczen: " << tablica[nr].imie << ", ocena z j. polskiego: "
				<< tablica[nr].j_polski << endl;
			break;
		}
	}
	return 0;
}