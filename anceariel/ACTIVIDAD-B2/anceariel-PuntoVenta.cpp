#include<iostream>
using namespace std;
int main ()
{
        float x,N,iva,vf,c=0,a=0,desc,vb1,vdes,vd2,viva;
        cout<<"ingrese el numero de productos,el valor del iva,y del descuento :"; cin>>N>>iva>>desc;
        do{                                                        cout<<"ingrese el precio del producto";cin>>x;
        c=c+1;                                                     a=a+x;                                                     }while(c<N);
        vb1=a;                                                     vdes=vb1*desc/100;
        vd2=vb1-vdes;
        viva=vb1*iva/100;                                          vf=vd2+viva;
        cout<<"su valor apagar es :"<<vf<<endl;
        cout<<" el cual tuvo un iva de:"<<viva<<endl;
        cout<<" y con un descuento de:"<<vdes;
return 0;
}
