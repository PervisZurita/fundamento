//================================================
//==> Nombre del programa:la edad de una persona
//==> Archivo :laedad.cpp
//==>Autor: Darío Vallejo 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
  using namespace std;
  int main(){
           int dl_aa,dl_ma,dl_da,dl_an,dl_mn,dl_dn,dl_a,dl_m,dl_d;
	   cout<<"ingrese la fecha actual y su fecha de nacimiento";
          cin>>dl_aa>>dl_ma>>dl_da>>dl_an>>dl_mn>>dl_dn;
          if(dl_da>=dl_dn){ 
		  dl_d=dl_da-dl_dn;                                               } 
	  else{                                                    dl_ma=dl_ma-1;                                                 dl_da=dl_da+30;         
	dl_d=dl_da-dl_dn;
	  }
       if(dl_ma>=dl_mn){
         dl_m=dl_ma-dl_mn;
       }
       else{
           dl_aa=dl_aa-1;
          dl_ma=dl_ma+12;
          dl_m=dl_ma-dl_mn;
       }
        dl_a=dl_aa-dl_an;
          cout<<"tienes "<<dl_a<<" años "<<endl;
           cout<<"Con "<<dl_m<<" meses"<<endl;
          cout<<"y dias"<<dl_d<<endl;
          return 0;
      }
      
