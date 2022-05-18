//================================================
//==> Nombre del programa: Suma de dos número
//==> Archivo : anceariel-laedad.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboración: 2022-04-29 
//==>Fecha ultima actualización: 2022-05-16
//=================================================
#include<iostream>
  using namespace std;
  int main(){
           int aa, ma, da, an, mn, dn, a, m, d;
           cout<<"ingrese la fecha actual y su fecha de nacimiento";
          cin>>aa>>ma>>da>>an>>mn>>dn;
          if(da>=dn){
                  d=da-dn;                                               }
          else{                                                    ma=ma-1;                                                 da=da+30;
        d=da-dn;
          }
       if(ma>=mn){
         m=ma-mn;
       }
       else{
           aa=aa-1;
           ma=ma+12;
          m=ma-mn;
       }
         a=aa-an;
          cout<<"tienes "<<a<<" años "<<endl;
           cout<<"Con "<<m<<" meses"<<endl;
          cout<<"y dias"<<d<<endl;
         

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos número"<<endl;
cout<<"//==> Archivo : anceariel-laedad.cpp"<<endl;
cout<<"//==>Autor: Ariel Ance"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//================================================="<<endl;



  return 0;
  }
