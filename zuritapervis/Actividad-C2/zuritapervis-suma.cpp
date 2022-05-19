//========Archivo: zuritapervis-sumaN.cpp 
 //========Autor: Zurita Pervis 
 //========Fecha de elaboracion: 13-05-2022 
 //========Fecha de actulizagion: 13-05-2022 
 #include<iostream> 
 using namespace std; 
 int main () 
 { 
         float PV_x,PV_c=0,PV_a=0,PV_N; 
         cout<<"ingrese las cantidad de numeros que vas a sumar:"; cin>>PV_N; 
         do{ 8
                 cout<<"ingrese el numero :"; cin>>PV_x; 
                 PV_c=PV_c+1; 
                 PV_a=PV_a+PV_x; 
         }while(PV_c<PV_N); 
         cout<<"suma total:"<<PV_a; 
         return 0; 
 }
