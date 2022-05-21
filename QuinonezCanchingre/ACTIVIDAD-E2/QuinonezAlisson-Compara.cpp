//==> Nombre del programa: comparacion de dos numeros           //==> Archivo :QuiñonezCanchingre-Compara.cpp
//==>Autor: Alisson Quiñonez                                    //==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-20
//=================================================             #include<iostream>
using namespace std;
int main ()
{
        float ac_a,ac_b;
        cout<<"ingrese los valores a b :"; cin>>ac_a>>ac_b;
        if(ac_a==ac_b) {
                cout<<"son iguales:";
        }else
                if(ac_a>ac_b) { cout<<"El mayor es"<<ac_a;
                }else{ cout<<" El mayor es"<<ac_b;
                }
        
        


        return 0;
}
