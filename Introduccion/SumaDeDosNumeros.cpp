#include<iostream>
using namespace std;
int suma(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Ingrese el primer  numero :";
    cin>>a;
    cout<<"Ingrese el segundo  numero :";
    cin>>b;
    cout<<"\nLa suma de "<< a <<" + "<< b <<" es:"<<suma(a,b);
}
