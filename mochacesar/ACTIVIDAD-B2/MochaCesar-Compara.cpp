#include<iostream>
using namespace std;
int main ()
{
        float x,y;
        cout<<"ingrese los valores x y :"; cin>>x>>y;
        if(x==y) {
                cout<<"son iguales:";
        }else{
                if(x>y) { cout<<"x es mayor";
                }else{ cout<<"y es mayor";
                }
        }
        return 0;
}
