//================================================


//==> Nombre del programa: Control de ventas
//==> Archivo : MochaCesar-PuntoVenta.cpp
//==>Autor: Cesar Mocha
//==>Fecha de elaboración: 2022-01-10
//==>Fecha Última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;int main ()
{
        float cm_x,cm_N,cm_iva,cm_vf,cm_c=0,cm_a=0,cm_desc,cm_vb1,cm_vdes,cm_vd2,cm_viva;
        cout<<"ingrese el numero de productos,el valor del iva,y del descuento :"; cin>>cm_N>>cm_iva>>cm_desc;
        do{                                                        cout<<"ingrese el precio del producto";cin>>cm_x;
        cm_c=cm_c+1;                                                     cm_a=cm_a+cm_x;                                                     }while(cm_c<cm_N);
        cm_vb1=cm_a;                                                     cm_vdes=cm_vb1*cm_desc/100;
        cm_vd2=cm_vb1-cm_vdes;
        cm_viva=cm_vb1*cm_iva/100;                                          cm_vf=cm_vd2+cm_viva;
        cout<<"su valor apagar es :"<<cm_vf<<endl;
        cout<<" el cual tuvo un iva de:"<<cm_viva<<endl;
        cout<<" y con un descuento de:"<<cm_vdes<<endl;
    cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : MochaCesar-PuntoVenta.cpp"<<endl;
	cout<<"//==>Autor: Cesar Mocha"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
return 0;
}
