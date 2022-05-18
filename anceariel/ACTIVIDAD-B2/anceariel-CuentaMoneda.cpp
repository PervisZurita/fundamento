//================================================
//==> Nombre del programa: Cuenta Monedas
//==> Archivo : anceariel-CuentaMoneda.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboración: 2022-04-29
//==>Fecha ultima actualización: 2022-05-16
//=================================================
#include<iostream>
using namespace std;
int main()
{
	int aa_n,aa_c,aa_c1,aa_c2,aa_cl,aa_cz;
	float aa_x,aa_al,aa_a,aa_a1,aa_a2,aa_az;
	aa_c=0;
	aa_c1=0;
	aa_c2=0;
	aa_a=0;
	aa_a1=0;
	aa_a2=0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>aa_n;
	do
	{
	
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>aa_x;
		aa_c=aa_c+1;
		aa_a=aa_a+aa_x;
		if(aa_x==0.25)
		{
			aa_c1=aa_c1+1;
			aa_a1=aa_x+aa_a1;
		}
		else
			{
				aa_c2=aa_c2+1;
				aa_a2=aa_a2+aa_x;
			}
   }
	while(aa_c<aa_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<aa_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<aa_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<aa_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<aa_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<aa_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<aa_a1<<endl;
	
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo : anceariel-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Ariel Ance"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//================================================="<<endl;

  return 0;
}
