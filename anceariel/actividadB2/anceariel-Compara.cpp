#include<iostream>
using namespace std;
int main ()
{
        float a,b;
        cout<<"ingrese los valores a b :"; cin>>a>>b;
        if(a==b) {
                cout<<"son iguales:";
        }else{
                if(a>b) { cout<<"a es mayor";
                }else{ cout<<"b es mayor";
                }
        }
        return 0;
}
