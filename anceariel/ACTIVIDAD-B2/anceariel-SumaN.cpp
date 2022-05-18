//================================================
//==> Nombre del programa: Suma de dos número
//==> Archivo : anceariel-SumaN.cpp
//==>Autor: Ariel Ance
//==>Fecha de elaboración: 2022-04-29
//==>Fecha ultima actualización: 2022-05-16
//=================================================
#include<iostream>
using namespace std;
int main ()    {
        float aa_x,aa_c=0,aa_a=0,aa_N;                                         cout<<"ingrese la catidad de numeros que vas a sumar:"; cin>>aa_N;                                               do{
        cout<<"ingrese el numero :"; cin>>aa_x;                              aa_c=aa_c+1;                                                     aa_a=aa_a+aa_x;                                             }while(aa_c<aa_N);                                       
                cout<<"suma total:"<<aa_a;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos número"<<endl;
cout<<"//==> Archivo : anceariel-SumaN.cpp"<<endl;
cout<<"//==>Autor: Ariel Ance"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-16"<<endl;
cout<<"//================================================="<<endl;



  cout<<"La suma de los "<<aa_N<<" números fue "<<aa_a<<endl;
  return 0;
}
