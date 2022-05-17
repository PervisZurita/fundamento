//================================================
//==> Nombre del programa: Cuenta monedas
//==> Archivo : QuinonezAlisson-CuentaMoneda.cpp
//==>Autor: Alisson Quñonez                                     //==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17                      //=================================================
#include<iostream>
using namespace std;
int main()
{
	int ac_n,ac_c,ac_c1,ac_c2,ac_cl,ac_cz;
	float ac_x,ac_al,ac_a,ac_a1,ac_a2,ac_az;
	ac_c = 0;
	ac_c1 = 0;
	ac_c2 = 0;
	ac_a= 0;
	ac_a1= 0;
	ac_a2= 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>ac_n;
	do
	{
	
	cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";
		cin>>ac_x;
		ac_c = ac_c+1;
		ac_a = ac_a+ac_x;
		if(ac_x==0.25)
		{
			ac_c1 =ac_c1+1;
			ac_a1 =ac_x+ac_a1;
		}
		else
			{
				ac_c2 =ac_c2+1;
				ac_a2 = ac_a2+ac_x;
			}
   }
	while(ac_c<ac_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ac_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<ac_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ac_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ac_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ac_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ac_a1<<endl;
	
cout<<endl<<"//================================================"
<<endl;                                                         cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo :QuinonezAlisson-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Alisson Quiñonez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;
cout<<"//================================================="<<endl;
return 0;
}
