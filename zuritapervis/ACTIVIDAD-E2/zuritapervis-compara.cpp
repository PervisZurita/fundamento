//========Nombre del programa: comparar dos numeros
//========Archivo= zuritapervis-compara.cpp
//========Autor= Zurita Pervis
//========Fecha de elaboracion: 13-05-2022
//========Fecha de actualizacion: 13-05-2022

#include<iostream>
using namespace std;
int main () 
{
	float PV_a,PV_b;
	cout<<"ingrese los valores ZP_a,ZP_b:"; cin>>PV_a>>PV_b;
	if(PV_a==PV_b) {
		cout<<"son iguales:";
	}else
		if(PV_a>PV_b) { cout<<"PV_a es mayor";
		}else{ cout<<"PV_b es mayor";
		}
	return 0;
}
