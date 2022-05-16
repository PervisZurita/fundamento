//=============================================
//===========Nomnbre del programa: punto de venta 
//===========Archivo: zuritapervis-puntoventa.cpp
//===========Pervis y coffee
//===========fecha de elaboracion: 29-04-2022
//===========fecha de actualizacion: 15-05-2022
//==============================================
#include<iostream>
using namespace std;
int main ()
{
	float x,N,iva,vf,c=0,a=0,desc,vb1,vdes,vb2,viva;
	cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>N>>iva>>desc;
	do{
		cout<<"ingrese el precio del producto";cin>>x;
		c=c+1;
		a=a+x;
	}while(c<N);
	vb1=a;
	vdes=vb1*desc/100;
	vb2=vb1-vdes;
	viva=vb1*iva/100;
	vf=vb2+viva;
	cout<<"su valor a pagar es de:"<<vf<<endl;
	cout<<"tuvo un iva de:"<<viva<<endl;
cout<<"y con un descuento de :"<<vdes;
	cout<<"CREATED BY PERVIS ZURITA";
return 0;


