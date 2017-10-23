//identificar numeros primos
//Edgar Castro
//23/10/17
#include <iostream>

using namespace std;

int main()
{
    int N=0;
    int sum=0;
    int count=1;
cout<<"Escriba numero entero"<<endl;
cin>>N;

for(int i=0; i<=(N); i++)
{
    sum = sum+i;
    }
    cout<<"La suma de los N numeros naturales es:"<<sum<<endl;
    return 0;
}



