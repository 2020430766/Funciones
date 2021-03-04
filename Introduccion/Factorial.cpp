#include <iostream>
using namespace std;
int a,b,factorial;

int main (void)
{
    cout << "Ingrese un numero " <<endl;
    cin >> a;
    factorial=1;
    for (b=1 ; b<=a ; b++)
    {
         factorial=b*factorial;
    }

    cout << "El factorial de " <<a<<" es: "<<factorial<<endl;


    return 0;
}
