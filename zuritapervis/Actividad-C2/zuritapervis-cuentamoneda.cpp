//=========Nombre del programa: contador de monedas
//=========Archivo:zuritapervis-cuentamoneda.cpp
//=========Autor: Zurita Pervis
//=========Fecha de elaboracion: 14-05-2022
//=========Fecha de actualizacio:14-05-2022
#include<iostream>
using namespace std;
int main()
{
	int ZP_n,ZP_c,ZP_c1,ZP_c2,ZP_cl,ZP_cz;
	float ZP_x,ZP_al,ZP_a,ZP_a1,ZP_a2,ZP_az;
	ZP_c=0;
	ZP_c1=0;
	ZP_c2=0;
	ZP_a=0;
	ZP_a1=0;
	ZP_a2=0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";cin>>ZP_n;
	do
	{
	cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "; cin>>ZP_x;
	
	ZP_c=ZP_c+1;
		ZP_a=ZP_a+ZP_x;
		if(ZP_x==0.25)
		{
			ZP_c1=ZP_c1+1;
			ZP_a1=ZP_x+ZP_a1;
		}else{
			ZP_c2=ZP_c2+1;
			ZP_a2=ZP_a2+ZP_x;
		}
	}
		while(ZP_c<ZP_n);
		cout<<"\n\tResultado\n\n"<<endl;
		cout<<"Cantidad de monedas ingresadas: "<<ZP_c<<endl;
		cout<<"Cantidad total de dinero contado: "<<ZP_a<<endl;
		cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ZP_c2<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ZP_a2<<endl;
		cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ZP_c1<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ZP_a1<<endl;
		return 0;
}
