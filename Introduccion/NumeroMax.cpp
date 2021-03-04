int mayor(int, int);
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Ingrese el primer numero:";
    cin>>a;
    cout<<"\nIngrese el segundo numero:";
    cin>>b;
    n=mayor(a,b);
    cout<<"El numero mayor es: "<<n<<endl;
    cin.ignore();return 0;
}

int mayor(int a,int b)
{
    int n;
    if(a>b)
            n=a;
        else
            n=b;

return n;
}
