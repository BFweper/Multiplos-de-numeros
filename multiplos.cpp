// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int cantidad = 100;
    int a = 0;
    int b[100], c[100];
    cout<<"Ingrese el número que desea conocer sus multiplos: ";
    cin>>a;
    for(int i = 0;i<=cantidad; i++)
    {
        b[i] = a*i; 
        if (b[i]>=10 && b[i]<100)
        {
            c[i] = b[i];
        }
        
    }
    cout<<"Estos son los multiplos del número "<<a/100<<"\n";
    for(int i = 0;i<=cantidad; i++)
    {
       cout<<"->"<<b[i]<<"\n"; 
    }
    int limite = (sizeof(c)/sizeof(c[0]));
    cout<<"Estos soln los multiplos de dos digitos: \n";
    for(int i = 0; i<=limite; i++)
    {
        cout<<"->"<<c[i]<<"\n"; 
    }
    
}