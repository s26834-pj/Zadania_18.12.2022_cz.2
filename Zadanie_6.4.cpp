#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string tekst;
    string konkatenacja;
    int a;

    cout << "Podaj tekst, ktory ma zostac poddany konkatenacji: ";
    cin >> tekst;
    cout << "Podaj liczbe konkatenacji: ";
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        konkatenacja += tekst;
    }

    cout << endl << "Tekst: " << tekst << ", po konkatenacji "<< a << " razy: "<< konkatenacja<< "." << endl;

    return 0;
}
