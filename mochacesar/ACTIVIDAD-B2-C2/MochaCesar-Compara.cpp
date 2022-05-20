//================================================


//==> Nombre del programa: Comparacion de 2 números
//==> Archivo : MochaCesar-Compara.cpp
//==>Autor: Cesar Mocha
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main ()
{
        float mc_x,mc_y;
        cout<<"ingrese los valores x y :"; cin>>mc_x>>mc_y;
        if(mc_x==mc_y) {
                cout<<"son iguales:";
        }else{
                if(mc_x>mc_y) { cout<<"x es mayor";
                }else{ cout<<"y es mayor";
                }
        }
        cout<<"//================================================"<<endl;
		cout<<"//==> Nombre del programa: Comparacion de 2 números"<<endl;
		cout<<"//==> Archivo : MochaCesar-Compara.cpp"<<endl;
		cout<<"//==>Autor: Cesar Mocha"<<endl;
		cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
		cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
		cout<<"//================================================="<<endl;
        return 0;
}
