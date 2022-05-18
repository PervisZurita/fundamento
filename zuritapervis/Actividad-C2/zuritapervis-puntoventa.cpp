//=============================================
//===========Nomnbre del programa: punto de venta
//===========Archivo: zuritapervis-puntoventa.cpp
//===========Pervis y coffee
//===========fecha de elaboracion: 29-04-2022
//===========fecha de actualizacion: 15-05-2022
//==============================================
#include<iostream>
using namespace std;
int main ()
{
        float ZP_x,ZP_N,ZP_iva,ZP_vf,ZP_c=0,ZP_a=0,ZP_desc,ZP_vb1,ZP_vdes,ZP_vb2,ZP_viva;
        cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>ZP_N>>ZP_iva>>ZP_desc;
        do{
                cout<<"ingrese el precio del producto";cin>>ZP_x;
                ZP_c=ZP_c+1;
                ZP_a=ZP_a+ZP_x;
        }while(ZP_c<ZP_N);
        ZP_vb1=ZP_a;
        ZP_vdes=ZP_vb1*ZP_desc/100;
        ZP_vb2=ZP_vb1-ZP_vdes;
        ZP_viva=ZP_vb1*ZP_iva/100;
        ZP_vf=ZP_vb2+ZP_viva;
        cout<<"su valor a pagar es de:"<<ZP_vf<<endl;
        cout<<"tuvo un iva de:"<<ZP_viva<<endl;
cout<<"y con un descuento de :"<<ZP_vdes;
        cout<<"CREATED BY PERVIS ZURITA";
return 0;

