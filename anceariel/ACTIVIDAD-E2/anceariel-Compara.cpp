//================================================
//==> Nombre del programa: Compara
//==> Archivo : anceariel-Compara.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboración: 2022-05-16
//==>Fecha ultima actualización: 2022-05-21
//=================================================
#include<iostream>
using namespace std;
int main ()
{
        float aa_a,aa_b;
        cout<<"ingrese los valores aa_a,aa_b :"; cin>>aa_a>>aa_b;
        if(aa_a==aa_b) {
                cout<<"son iguales:";
        }else{
                if(aa_a>aa_b) { cout<<"aa_a es mayor";
                }else{ cout<<"aa_b es mayor";
                }
        }
        

  return 0;
}
