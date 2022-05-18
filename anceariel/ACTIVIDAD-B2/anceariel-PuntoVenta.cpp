//================================================
//==> Nombre del programa: Punto de venta
//==> Archivo: anceariel-PuntoVenta.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboración: 2022-04-29 
//==>Fecha ultima actualización: 2022-04-16
//=================================================
#include<iostream>
using namespace std;
int main ()
{
        float aa_x,aa_N,aa_iva,aa_vf,aa_c=0,aa_a=0,aa_desc,aa_vb1,aa_vdes,aa_vd2,aa_viva;
        cout<<"ingrese el numero de productos,el valor del iva,y del descuento :"; cin>>aa_N>>aa_iva>>aa_desc;
        do{                                                        cout<<"ingrese el precio del producto";cin>>aa_x;
        aa_c=aa_c+1;                                                     aa_a=aa_a+aa_x;                                                     }while(aa_c<aa_N);
        aa_vb1=aa_a;                                                     aa_vdes=aa_vb1*aa_desc/100;
        aa_vd2=aa_vb1-aa_vdes;
        aa_viva=aa_vb1*aa_iva/100;                                          aa_vf=aa_vd2+aa_viva;
        cout<<"su valor apagar es :"<<aa_vf<<endl;
        cout<<" el cual tuvo un iva de:"<<aa_viva<<endl;
        cout<<" y con un descuento de:"<<aa_vdes;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de venta"<<endl;
cout<<"//==> Archivo : anceariel-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Ariel Ance"<<endl;
cout<<"//==>Fecha de elaboración: 2022-41-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//================================================="<<endl;


  return 0;
}
