int mayor(int a, int b, int);
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cout<<"Ingrese tres numeros\n";
    cout<<"Ingrese el primer  numero :";
    cin>>a;
    cout<<"Ingrese el segundo  numero :";
    cin>>b;
    cout<<"Ingrese el segundo  numero :";
    cin>>c;
    n=mayor(a,b,c);
    cout<<"El numero mayor es: "<<n<<endl;
    cin.ignore();return 0;
}

int mayor(int a,int b,int c)
{
    int n;
    if(a>b)
        if(a>c)
            n=a;
        else
            n=c;
    else
        if(b>c)
            n=b;
        else
            n=c;
return n;
}
