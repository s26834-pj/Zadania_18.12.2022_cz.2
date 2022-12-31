#include <iostream>

using namespace std;

int ile_liczb(int n);

int main()
{
    int n;
    cout << "Podaj liczbe naturalna: ";
    cin >> n;
    cout << endl << ile_liczb(n) << " liczb jest nie wiekszych od n, ktore sa podzielne przez 5 ale nie sa podzielne przez 3."<< endl;

    return 0;
}

int ile_liczb(int n) {
    if (n < 0)
    {
        return 0;
    }
    else if ((n % 5 == 0) && (n % 3 != 0))
    {
        return 1 + ile_liczb(n - 1);
    }
    else {
        ile_liczb(n - 1);
    }
}
