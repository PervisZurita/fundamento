//================================================
//==> Nombre del programa: Suma de dos n�mero
//==> Archivo : VallejoDar�o-SumaN.cpp
//==> Autor: Dar�o Vallejo 
//==> Fecha de elaboraci�n:2022-04-29
//==> Fecha ultima actualizaci�n:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main ()
{
	float dl_x,dl_c=0,dl_a=0,dl_N;
	cout<<"ingrese la catidad de numeros que vas a sumar:"; cin>>dl_N;
do{ 
	cout<<"ingrese el numero :"; cin>>dl_x;
		dl_c=dl_c+1;
		dl_a=dl_a+dl_x;
	}while(dl_c<dl_N);

		cout<<"suma total:"<<dl_a;
		return 0;
	}
	
