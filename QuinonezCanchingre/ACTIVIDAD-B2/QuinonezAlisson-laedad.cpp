//================================================
//==> Nombre del programa:la edad de una persona
//==> Archivo :laedad.cpp
//==>Autor:Alisson Quiñonez 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
  using namespace std;
  int main(){
           int ac_aa,ac_ma,ac_da,ac_an,ac_mn,ac_dn,ac_a,ac_m,ac_d;
	   cout<<"ingrese la fecha actual y su fecha de nacimiento";
          cin>>ac_aa>>ac_ma>>ac_da>>ac_an>>ac_mn>>ac_dn;
          if(ac_da>=ac_dn){ 
		  ac_d=ac_da-ac_dn;                                               } 
	  else{                                                    ac_ma=ac_ma-1;                                                 ac_da=ac_da+30;         
	ac_d=ac_da-ac_dn;
	  }
       if(ac_ma>=ac_mn){
         ac_m=ac_ma-ac_mn;
       }
       else{
           ac_aa=ac_aa-1;
          ac_ma=ac_ma+12;
          ac_m=ac_ma-ac_mn;
       }
        ac_a=ac_aa-ac_an;
          cout<<"tienes "<<ac_a<<" años "<<endl;
           cout<<"Con "<<ac_m<<" meses"<<endl;
          cout<<"y dias"<<ac_d<<endl;
        cout<<endl<<"//============================================="<<endl;
cout<<"//==> Nombre del programa:la edad de una persona"<<endl
;
cout<<"//==> Archivo : laedad.cpp"<<endl;
cout<<"//==>Autor: Alisson Quiñonez"<<endl;                cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-17"<<endl;
cout<<"//================================================="
<<endl;
	  return 0;
  }
