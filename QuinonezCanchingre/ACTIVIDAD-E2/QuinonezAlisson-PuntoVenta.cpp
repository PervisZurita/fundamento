//================================================              //==> Nombre del programa:Punto de venta                        //==> Archivo :QuinonezAlisson-PuntoVenta.cpp                    //==>Autor: Alisson Quñonez                                     //==>Fecha de elaboración:2022-04-29                            //==>Fecha ultima actualización:2022-05-20                      //================================================= //             
#include<iostream>                                              using namespace std;
int main ()                                                     {                                                                       float ac_x,ac_N,ac_iva,ac_vf,ac_c=0,ac_a=0,ac_desc,ac_vb1,ac_vdes,ac_vd2,ac_viva;                                               cout<<"ingrese el numero de productos,el valor del iva,y del descuento :"; cin>>ac_N>>ac_iva>>ac_desc;                          do{
        cout<<"ingrese el precio del producto";cin>>ac_x;
        ac_c=ac_c+1;                                                    ac_a=ac_a+ac_x;
        }while(ac_c<ac_N);                                              ac_vb1=ac_a;                                                    ac_vdes=ac_vb1*ac_desc/100;                                     ac_vd2=ac_vb1-ac_vdes;
        ac_viva=ac_vb1*ac_iva/100;                                      ac_vf=ac_vd2+ac_viva;                                           cout<<"su valor apagar es :"<<ac_vf<<endl;
        cout<<" el cual tuvo un iva de:"<<ac_viva<<endl;
        cout<<" y con un descuento de:"<<ac_vdes;
	return 0;                                                                                                                       }
