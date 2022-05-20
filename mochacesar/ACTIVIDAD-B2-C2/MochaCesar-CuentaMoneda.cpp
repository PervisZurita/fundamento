//================================================


//==> Nombre del programa: Comparacion de 2 números
//==> Archivo : Compara.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	int cm_n, cm_c, cm_c1, cm_c2, cm_cl, cm_cz;
	float cm_x, cm_al, cm_a, cm_a1, cm_a2, cm_az;
	cm_c = 0;
	cm_c1 = 0;
	cm_c2 = 0;
	cm_a = 0;
	cm_a1 = 0;
	cm_a2 = 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>cm_n;
	do
	{
	
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>cm_x;
		cm_c = cm_c+1;
		cm_a = cm_a+cm_x;
		if(cm_x==0.25)
		{
			cm_c1 = cm_c1+1;
			cm_a1 = cm_x+cm_a1;
		}
		else
			{
				cm_c2 = cm_c2+1;
				cm_a2 = cm_a2+cm_x;
			}
   }
	while(cm_c<cm_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<cm_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<cm_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<cm_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<cm_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<cm_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<cm_a1<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de 2 números"<<endl;
	cout<<"//==> Archivo : Compara.cpp"<<endl;
	cout<<"//==>Autor: Luis Montezuma"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	
return 0;
}
