//identificar numeros primos
//Edgar Castro
//23/10/17
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int primo=0;
cout<<"Escriba numero entero"<<endl;
cin>>N;

for(int i=2; i<=(N/2); i++)
{
    if((N%i)==0){
        primo=1;
        break;
    }
}
if(primo==0)
    cout<<"Su numero es primo"<<endl;
        else
        cout<<"Su numero no es primo"<<endl;
    return 0;
}



