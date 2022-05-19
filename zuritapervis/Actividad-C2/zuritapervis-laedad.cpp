//==========Nombre del programa: la edad
//==========Archivo: zuritapervis-laedad.cpp
//==========Autor: Zurita Pervis
//==========Fecha de elaboracion: 29-04-2022
//==========Fecha de actualizacion: 14-05-2022
#include<iostream>
using namespace std;
int main (){
	int PV_aa,PV_ma,PV_da,PV_an,PV_mn,PV_dn,PV_a,PV_m,PV_d;
	cin>>PV_aa>>PV_ma>>PV_da>>PV_an>>PV_mn>> PV_dn;
	if(PV_da>=PV_dn){
		PV_d=PV_da-PV_dn;
	}
	else{
		PV_ma=PV_ma+1;
		PV_da=PV_da+30;
		PV_d=PV_da-ZP_dn;
	}
	if(PV_ma>=PV_mn){
		PV_m=PV_ma-PV_mn;
	}
	else{
		PV_aa=PV_aa-1;
		PV_ma=PV_ma+12;
		PV_m=PV_ma-PV_mn;
	}
	PV_a=PV_aa-PV_a;
	cout<<PV_a<<endl;
	cout<<PV_m<<endl;
	cout<<PV_d<<endl;
	
	return 0;
}

