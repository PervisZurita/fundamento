//================================================
//==> Nombre del programa: Suma de dos número
//==> Archivo : QuinonezAlisson-SumaN.cpp
//==>Autor: Alisson Quñonez
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main ()
{
	float ac_x,ac_c=0,ac_a=0,ac_N;
	cout<<"ingrese la catidad de numeros que vas a sumar:"; cin>>ac_N;
do{ 
	cout<<"ingrese el numero :"; cin>>ac_x;
		ac_c=ac_c+1;
		ac_a=ac_a+ac_x;
	}while(ac_c<ac_N);

	cout<<"suma total:"<<ac_a;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos número"<<endl;
cout<<"//==> Archivo : QuinonezAlisson-SumaN.cpp"<<endl;
cout<<"//==>Autor: Alisson Quiñonez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;
cout<<"//================================================="<<endl;



  cout<<"La suma de los "<<ac_N<<" números fue "<<ac_a<<endl;

	return 0;
	
  }
