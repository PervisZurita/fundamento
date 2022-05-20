//================================================
//==> Nombre del programa:contador de moneda
//==> Archivo :cuentamoneda.cpp
//==>Autor: Darío Vallejo 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main()
{
	int dl_n,dl_c,dl_c1,dl_c2,dl_cl,dl_cz;
	float x,al,a,a1,a2,az;
	dl_c=0;
	dl_c1=0;
	dl_c2=0;
	dl_a=0;
	dl_a1=0;
	dl_a2=0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";cin>dl_>n;
	do
	{
	cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "; cin>>dl_x;
	
	dl_c=dl_c+1;
		dl_a=dl_a+x;
		if(dl_x==0.25)
		{
			dl_c1=dl_c1+1;
			dl_a1=x+dl_a1;
		}else{
			dl_c2=dl_c2+1;
			dl_a2=dl_a2+x;
		}
	}
		while(c<n);
		cout<<"\n\tResultado\n\n"<<endl;
		cout<<"Cantidad de monedas ingresadas: "<dl_<c<<endl;
		cout<<"Cantidad total de dinero contado: "<<dl_a<<endl;
		cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<dl_c2<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.10: "<<dl_a2<<endl;
		cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<dl_c1<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.25: "<<dl_a1<<endl;
		return 0;
