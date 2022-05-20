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
        float PV_x,PV_N,PV_iva,PV_vf,PV_c=0,PV_a=0,0V_desc,PV_vb1,PV_vdes,PV_vb,PV_viva;
        cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>PV_N>>PV_iva>>PV_desc;
        do{
                cout<<"ingrese el precio del producto";cin>>PV_x;
                PV_c=PV_c+1;
                PV_a=PV_a+PV_x;
        }while(PV_c<PV_N);
        PV_PV1=PV_a;
        PV_vdes=PV_vb1*ZP_desc/100;
        PV_vb2=PV_vb1-PV_vdes;
        PV_viva=PV_vb1*ZP_iva/100;
        PV_vf=PV_vb2+PV_viva;
        cout<<"su valor a pagar es de:"<<PV_vf<<endl;
        cout<<"tuvo un iva de:"<<PV_viva<<endl;
cout<<"y con un descuento de :"<<PV_vdes;
return 0;
}

