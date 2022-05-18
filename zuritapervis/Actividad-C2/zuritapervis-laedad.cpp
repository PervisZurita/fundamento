//==========Nombre del programa: la edad
//==========Archivo: zuritapervis-laedad.cpp
//==========Autor: Zurita Pervis
//==========Fecha de elaboracion: 29-04-2022
//==========Fecha de actualizacion: 14-05-2022
#include<iostream>
using namespace std;
int main (){
	int ZP_aa,ZP_ma,ZP_da,ZP_an,ZP_mn,ZP_dn,ZP_a,ZP_m,ZP_d;
	cin>>ZP_aa>>ZP_ma>>ZP_da>>ZP_an>>ZP_mn>>ZP_dn;
	if(ZP_da>=ZP_dn){
		ZP_d=ZP_da-ZP_dn;
	}
	else{
		ZP_ma=ZP_ma+1;
		ZP_da=ZP_da+30;
		ZP_d=ZP_da-ZP_dn;
	}
	if(ZP_ma>=ZP_mn){
		ZP_m=ZP_ma-ZP_mn;
	}
	else{
		ZP_aa=ZP_aa-1;
		ZP_ma=ZP_ma+12;
		ZP_m=ZP_ma-ZP_mn;
	}
	ZP_a=ZP_aa-ZP_a;
	cout<<ZP_a<<endl;
	cout<<ZP_m<<endl;
	cout<<ZP_d<<endl;
	
	return 0;
}



