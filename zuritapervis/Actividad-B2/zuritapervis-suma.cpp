//========Nombre del programa: Suma de dos numeros
//========Archivo: zuritapervis-sumaN.cpp
//========Autor: Zurita Pervis
//========Fecha de elaboracion: 13-05-2022
//========Fecha de actulizagion: 13-05-2022
#include<iostream>
using namespace std;
int main ()
{
	float ZP_x,ZP_c=0,ZP_a=0,ZP_N;
	cout<<"ingrese laa cantidad de numeros que vas a sumar:"; cin>>ZP_N;
	do{
		cout<<"ingrese el numero :"; cin>>ZP_x;
		ZP_c=ZP_c+1;
		ZP_a=ZP_a+ZP_x;
	}while(ZP_c<ZP_N);
	cout<<"suma total:"<<ZP_a;
	return 0;
}
