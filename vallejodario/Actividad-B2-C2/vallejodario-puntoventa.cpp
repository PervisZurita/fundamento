//================================================
//==> Nombre del programa:punto de venta
//==> Archivo :puntodeventa.cpp
//==>Autor: Darío Vallejo 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main ()
{
	float dl_x,dl_N,dl_iva,dl_vf,dl_c=0,dl_a=0,dl_desc,dl_vb1,dl_vdes,dl_vb2,dl_viva;
	cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>dl_N>>dl_iva>>dl_desc;
	do{
		cout<<"ingrese el precio del producto";cin>>dl_x;
		dl_c=dl_c+1;
		dl_a=dl_a+dl_x;
	}while(dl_c<dl_N);
	dl_vb1=dl_a;
	dl_vdes=dl_vb1*dl_desc/100;
	dl_vb2=dl_vb1-dl_vdes;
	dl_viva=dl_vb1*dl_iva/100;
	dl_vf=dl_vb2+dl_viva;
	cout<<"su valor a pagar es de:"<<dl_vf<<endl;
	cout<<"tuvo un iva de:"<<dl_viva<<endl;
    cout<<"y con un descuento de :"<<dl_vdes;
	return 0;
}

