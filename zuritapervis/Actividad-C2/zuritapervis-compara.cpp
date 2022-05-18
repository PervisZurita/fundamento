//========Nombre del programa: comparar dos numeros
//========Archivo= zuritapervis-compara.cpp
//========Autor= Zurita Pervis
//========Fecha de elaboracion: 13-05-2022
//========Fecha de actualizacion: 13-05-2022

#include<iostream>
using namespace std;
int main () 
{
	float ZP_a,ZP_b;
	cout<<"ingrese los valores ZP_a,ZP_b:"; cin>>ZP_a>>ZP_b;
	if(ZP_a==ZP_b) {
		cout<<"son iguales:";
	}else
		if(ZP_a>ZP_b) { cout<<"ZP_a es mayor";
		}else{ cout<<"ZP_b es mayor";
		}
	return 0;
}

