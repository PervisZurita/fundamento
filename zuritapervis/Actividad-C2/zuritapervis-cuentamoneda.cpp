//=========Nombre del programa: contador de monedas
//=========Archivo:zuritapervis-cuentamoneda.cpp
//=========Autor: Zurita Pervis
//=========Fecha de elaboracion: 14-05-2022
//=========Fecha de actualizacio:14-05-2022
#include<iostream>
using namespace std;
int main()
{
	int PV_n,PV_c,PV_c,PV_c2,PV_cl,PV_cz;
	float PV_x,PV_al,PV_a,PV_a1,PV_a2,PV_az;
	PV_c=0;
	PV_c1=0;
	PV_c2=0;
	PV_a=0;
	PV_a1=0;
	PV_a2=0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";cin>>PV_n;
	do
	{
	cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "; cin>>PV_x;
	
	PV_c=PV_c+1;
		PV_a=PV_a+PV_x;
		if(PV_x==0.25)
		{
			PV_c1=PV_c1+1;
			PV_a1=PV_x+PV_a1;
		}else{
			PV_c2=PV_c2+1;
			PV_a2=PV_a2+PV_x;
		}
	}
		while(PV_c<PV_n);
		cout<<"\n\tResultado\n\n"<<endl;
		cout<<"Cantidad de monedas ingresadas: "<<PV_c<<endl;
		cout<<"Cantidad total de dinero contado: "<<PV_a<<endl;
		cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<PV_c2<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.10: "<<PV_a2<<endl;
		cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<PV_c1<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.25: "<<PV_a1<<endl;
		return 0;
}
