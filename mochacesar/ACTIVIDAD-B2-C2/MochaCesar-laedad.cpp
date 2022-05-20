//================================================


//==> Nombre del programa: Calcular la edad
//==> Archivo : MochaCesar-laedad.cpp
//==>Autor: Cesar Mocha
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
  using namespace std;
  int main(){
           int cm_aa, cm_ma, cm_da, cm_an, cm_mn, cm_dn, cm_a, cm_m, cm_d;
           cout<<"ingrese la fecha actual y su fecha de nacimiento";
          cin>>cm_aa>>cm_ma>>cm_da>>cm_an>>cm_mn>>cm_dn;
          if(cm_da>=cm_dn){
                  cm_d=cm_da-cm_dn;                                               }
          else{                                                    cm_ma=cm_ma-1;                                                 cm_da=cm_da+30;
        cm_d=cm_da-cm_dn;
          }
       if(cm_ma>=cm_mn){
         cm_m=cm_ma-cm_mn;
       }
       else{
           cm_aa=cm_aa-1;
           cm_ma=cm_ma+12;
          cm_m=cm_ma-cm_mn;
       }
         cm_a=cm_aa-cm_an;
          cout<<"tienes "<<cm_a<<" aÃ±os "<<endl;
           cout<<"Con "<<cm_m<<" meses"<<endl;
          cout<<"y dias"<<cm_d<<endl;
        cout<<"//================================================"<<endl;
		cout<<"//==> Nombre del programa: Calcular la edad"<<endl;
		cout<<"//==> Archivo : MochaCesar-laedad.cpp"<<endl;
		cout<<"//==>Autor: Cesar Mocha"<<endl;
		cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
		cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
		cout<<"//================================================="<<endl;
         return 0;
  }
