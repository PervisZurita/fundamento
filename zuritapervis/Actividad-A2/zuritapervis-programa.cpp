#include <iostream>
#include <cstdlib>
#include <locale.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int opcion, opcion2;
	bool repetir = true;
	
	do 
	{
		system("cls");
		menu:
		cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
			cout<<"\t\t\t----------Fundamento de Programacion-----------"<<endl;
		cout<<"\t\t\t----------------MenÃº de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. Todos los trabajos de Pervis Zurita"<<endl;
		cout<<"2. Todos los trabajos de Alisson Quinonez"<<endl;
		cout<<"3. Todos los trabajos de Cesar Mocha"<<endl;
		cout<<"4. Todos los trabajos de Ariel Ance "<<endl;
		cout<<"5. Todos los trabajos de Dario Vallejo"<<endl;
		cout<<"0. Salir"<<endl;
		
		cout<<"Ingrese una opciÃ³n: "; cin>>opcion;	
		switch(opcion)
		{
			    case 1:
			     	do
	              	{
				    	system("cls");
				    	cout<<"\n\n\t\t\t----------Fundamentos de Programacion-----------"<<endl;
					 cout<<"\t\t\t--------------Sub MenÃº de Opciones--------------"<<endl;
				 	cout<<"\t\t\t------------------------------------------------"<<endl;
					 cout<<"1. Comparar numeros"<<endl;
				 	cout<<"2. Cuenta monedas"<<endl;
				 	cout<<"3. Calcular la edad"<<endl;
				 	cout<<"4. Punto de venta"<<endl;
				 	cout<<"5. Suma de dos numeros "<<endl;
				 	cout<<"6. Regresar al menu principal"<<endl;
				 	cout<<"0. Salir"<<endl;
				 	cout<<"Ingrese una opciÃ³n: "; cin>>opcion2;
				 	switch(opcion2)
			     	{
					case 1:
						 int zp_aa, zp_bb ;
							cout<<"Ingrese el primer numero a comparar: ";  cin>> zp_aa;  
							cout<<"Ingrese el segundo numero a comparar: ";  cin>> zp_bb;
							if (zp_aa==zp_bb)
								cout<<"Son iguales"<<endl;
							else
								if (zp_aa>zp_bb)
									cout<<zp_aa<<" es mayor"<<endl;
								else
									cout<<zp_bb<<" es mayor"<<endl;
				    	cout<<"//================================================"<<endl;
                        cout<<"Nombre del programa: comparar nÃºmeros"<<endl;
                        cout<<"Archivo: zuritapervis-comprara.cpp"<<endl;
                        cout<<"Autor: Pervis Zurita"<<endl;
                        cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                        cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                        cout<<"//================================================"<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 2:
						int zp_n, zp_c, zp_c1, zp_c2, zp_cl, zp_cz;
						float zp_x, zp_al, zp_a, zp_a1, zp_zp, zp_a2;
						zp_c = 0;
						zp_c1 = 0;
						zp_c2 = 0;
						zp_a = 0;
						zp_a1 = 0;
						zp_a2=0;
						cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
						cout<<"Cantidad de monedas a ingresar: ";  cin>>zp_n;
						do
						{
						
							cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>zp_x;
							zp_c = zp_c+1;
							zp_a = zp_a+zp_x;
							if(zp_x==0.25)
							{
								zp_c1 = zp_c1+1;
								zp_a1 = zp_x+zp_a1;
							}
							else
								{
									zp_c2 = zp_c2+1;
									zp_a2 = zp_a2+zp_x;
								}
					   }
						while(zp_c<zp_n);
						cout<<"\n\tRESULTADOS\n\n"<<endl;
						cout<<"Cantidad de monedas ingresadas: "<<zp_c<<endl;
						cout<<"Cantidad total de dinero contado: "<<zp_a<<endl;
						cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<zp_c2<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.10: "<<zp_a2<<endl;
						cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<zp_c1<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.25: "<<zp_a1<<endl;
					 cout<<"//================================================"<<endl;
                     cout<<"Nombre del programa: cuenta moneda"<<endl;
                     cout<<"Archivo: zuritapervis-cuentamoneda.cpp"<<endl;
                     cout<<"Autor: Pervis Zurita"<<endl;
                     cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                     cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                     cout<<"//================================================"<<endl;
						system("pause>null");
					break;
					case 3:
						int zp_diaAct; 
						int zp_mesAct; 
						int zp_anoAct; 
		
						int zp_diaNac; 
						int zp_mesNac; 
						int zp_anoNac;
						
						int zp_anoR, zp_mesR, zp_diaR;
		
						cout<<"\n\tCalcular la Edad\n\n";
						cout << "Ingrese AÃ±o Actual: ";   cin >> zp_anoAct;
						cout << "Ingrese Mes Actual: ";   cin >> zp_mesAct;
						cout << "Ingrese Dia Actual: ";  cin >> zp_diaAct;
		
						cout << "\nIngrese el AÃ±o Nacimiento: ";  cin >> zp_anoNac;
						cout << "Ingrese el mes de Nacimiento: ";  cin >> zp_mesNac;
						cout << "Ingrese el Dia de Nacimiento: ";  cin >> zp_diaNac;
						
						if (zp_anoAct > zp_anoNac)
						{
							if(zp_mesAct > zp_mesNac)	 
							{
								zp_anoR=zp_anoAct-zp_anoNac;	
								zp_mesR=zp_mesAct-zp_mesNac;					
							}
							else
							{
								zp_anoR=zp_anoAct-zp_anoNac-1;	
								zp_mesR=(zp_mesAct+12)-zp_mesNac;					
							}
							
											
							if(zp_diaAct > zp_diaNac)
							{
								
								zp_diaR=zp_diaAct-zp_diaNac;
							}
							else
							{
								zp_mesR=zp_mesR-1;
								zp_diaR=(zp_diaAct+30)-zp_diaNac;
							}
							
							cout << "\ntienes una edad de:\n";
						    cout << " Edad: " <<zp_anoR<< endl;
						    cout << " Mes: " <<zp_mesR << endl;
						    cout << " Dia: " << zp_diaR << endl;
							
							
					        	}
						     else
					     	{
							cout << "\n Calculo no es posible ";
				          	}
				         	cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: calcular la edad"<<endl;
                             cout<<"Archivo: zuritapervis-laedad.cpp"<<endl;
                             cout<<"Autor: Pervis Zurita"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
					      	system("pause>null");
					break;
					case 4:
							float zp_xx, zp_cc, zp_at, zp_nn, zp_vb, zp_viva, zp_vdes, zp_vfi, zp_vft;
						zp_cc = 0;
						zp_at = 0;
						cout<<"\n\tPunto de Venta\n\n"<<endl;
						cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> zp_nn;
						
						do
						{
							cout<<"Ingrese el valor del producto " <<zp_cc+1 <<": " ;   cin>> zp_xx;
							zp_cc = zp_cc+1;
							zp_at = zp_at+zp_xx;
						}
						while(zp_cc<zp_nn);
						
						zp_vb = zp_at;
						zp_viva = zp_vb*0.12;
						zp_vdes = zp_vb*0.10;
						zp_vfi = zp_vb+zp_viva;
						zp_vft = zp_vfi-zp_vdes;
						cout<<"\n\tResultado\n\n"<<endl;
						cout<<"Valor con iva es: "<<zp_vfi<<endl;
						cout<<"Valor final es: "<<zp_vft<<endl;
						cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: punto de venta"<<endl;
                             cout<<"Archivo: zuritapervis-puntoventa.cpp"<<endl;
                             cout<<"Autor: Pervis Zurita"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
							system("pause>null");
					break;
					case 5:
					int zp_ax, zp_bx, zp_cx;
						cout<<"\n\tSUMA DE 2 NÃšMEROS"<<endl;
						cout<<"Ingrese el primer nÃºmero a sumar: "; cin>>zp_ax;
						cout<<"Ingrese el segundo nÃºmero a sumar: "; cin>>zp_bx;
						zp_cx = zp_ax+zp_bx;
						cout<<"\n\tResultado"<<endl;
						cout<<"El resultado de la suma entre "<<zp_ax<<" + "<<zp_bx<<" es igual a: "<<zp_cx<<endl;
						cout<<"//================================================"<<endl;
						cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
						cout<<"//==> Archivo : zuritapervis-suma.cpp"<<endl;
						cout<<"//==>Autor: Pervis zurita"<<endl;
						cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
						cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
						cout<<"//================================================="<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 6:
						system("cls");
						goto menu;
						system("pause>null");
						getchar();
						
					break;
						
					case 0:
						repetir = false;
					break;				
				}
				}
				while(repetir);
				
				return 0;
			
			case 2:
					do
	              	{
				    	system("cls");
				    	cout<<"\n\n\t\t\t----------Fundamentos de Programacion-----------"<<endl;
					 cout<<"\t\t\t--------------Sub MenÃº de Opciones--------------"<<endl;
				 	cout<<"\t\t\t------------------------------------------------"<<endl;
					 cout<<"1. Comparar numeros"<<endl;
				 	cout<<"2. Cuenta monedas"<<endl;
				 	cout<<"3. Calcular la edad"<<endl;
				 	cout<<"4. Punto de venta"<<endl;
				 	cout<<"5. Suma de dos numeros "<<endl;
				 	cout<<"6. Regresar al menu principal"<<endl;
				 	cout<<"0. Salir"<<endl;
				 	cout<<"Ingrese una opciÃ³n: "; cin>>opcion2;
				 	switch(opcion2)
			     	{
					case 1:
						 int ac_aa, ac_bb ;
							cout<<"Ingrese el primer nÃºmero a comparar: ";  cin>> ac_aa;  
							cout<<"Ingrese el segundo nÃºmero a comparar: ";  cin>> ac_bb;
							if (ac_aa==ac_bb)
								cout<<"Son iguales"<<endl;
							else
								if (ac_aa>ac_bb)
									cout<<ac_aa<<" es mayor"<<endl;
								else
									cout<<ac_bb<<" es mayor"<<endl;
				    	cout<<"//================================================"<<endl;
                        cout<<"Nombre del programa: comparar nÃºmeros"<<endl;
                        cout<<"Archivo: QuiÃ±onezAlisson-comprara.cpp"<<endl;
                        cout<<"Autor: Alisson QuiÃ±onez"<<endl;
                        cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                        cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                        cout<<"//================================================"<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 2:
						int ac_n, ac_c, ac_c1, ac_c2, ac_cl, ac_cz;
						float ac_x, ac_al, ac_a, ac_a1, ac_a2, ac_az;
						ac_c = 0;
						ac_c1 = 0;
						ac_c2 = 0;
						ac_a = 0;
						ac_a1 = 0;
						ac_a2 = 0;
						cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
						cout<<"Cantidad de monedas a ingresar: ";  cin>>ac_n;
						do
						{
						
							cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>ac_x;
							ac_c = ac_c+1;
							ac_a = ac_a+ac_x;
							if(ac_x==0.25)
							{
								ac_c1 = ac_c1+1;
								ac_a1 = ac_x+ac_a1;
							}
							else
								{
									ac_c2 = ac_c2+1;
									ac_a2 = ac_a2+ac_x;
								}
					   }
						while(ac_c<ac_n);
						cout<<"\n\tRESULTADOS\n\n"<<endl;
						cout<<"Cantidad de monedas ingresadas: "<<ac_c<<endl;
						cout<<"Cantidad total de dinero contado: "<<ac_a<<endl;
						cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ac_c2<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ac_a2<<endl;
						cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ac_c1<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ac_a1<<endl;
					 cout<<"//================================================"<<endl;
                     cout<<"Nombre del programa: cuenta moneda"<<endl;
                     cout<<"Archivo: QuiÃ±onezAlisson-CuentaMoneda.cpp"<<endl;
                     cout<<"Autor: Alisson QuiÃ±onez"<<endl;
                     cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                     cout<<"Fecha de actualizacion: 13-05-2022"<<endl;
                     cout<<"//================================================"<<endl;
						system("pause>null");
					break;
					case 3:
						int ac_diaAct; 
						int ac_mesAct; 
						int ac_anoAct; 
		
						int ac_diaNac; 
						int ac_mesNac; 
						int ac_anoNac;
						
						int ac_anoR, ac_mesR, ac_diaR;
		
						cout<<"\n\tCalcular la Edad\n\n";
						cout << "Ingrese AÃ±o Actual: ";   cin >> ac_anoAct;
						cout << "Ingrese Mes Actual: ";   cin >> ac_mesAct;
						cout << "Ingrese Dia Actual: ";  cin >> ac_diaAct;
		
						cout << "\nIngrese AÃ±o Nacimiento: ";  cin >> ac_anoNac;
						cout << "Ingrese Mes de Nacimiento: ";  cin >> ac_mesNac;
						cout << "Ingrese Dia de Nacimiento: ";  cin >> ac_diaNac;
						
						if (ac_anoAct > ac_anoNac)
						{
							if(ac_mesAct > ac_mesNac)	 
							{
								ac_anoR=ac_anoAct-ac_anoNac;	
								ac_mesR=ac_mesAct-ac_mesNac;					
							}
							else
							{
								ac_anoR=ac_anoAct-ac_anoNac-1;	
								ac_mesR=(ac_mesAct+12)-ac_mesNac;					
							}
							
											
							if(ac_diaAct > ac_diaNac)
							{
								
								ac_diaR=ac_diaAct-ac_diaNac;
							}
							else
							{
								ac_mesR=ac_mesR-1;
								ac_diaR=(ac_diaAct+30)-ac_diaNac;
							}
							
							cout << "\ntienes una edad:\n";
						    cout << " Edad: " <<ac_anoR<< endl;
						    cout << " Mes: " <<ac_mesR << endl;
						    cout << " Dia: " << ac_diaR << endl;
							
							
					        	}
						     else
					     	{
							cout << "\n Calculo no es posible ";
				          	}
				         	cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: calcular la edad"<<endl;
                             cout<<"Archivo: QuiÃ±onezAlisson-laedad.cpp"<<endl;
                             cout<<"Autor:  Alisson QuiÃ±onez"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
					      	system("pause>null");
					break;
					case 4:
							float ac_xx, ac_cc, ac_at, ac_nn, ac_vb, ac_viva, ac_vdes, ac_vfi, ac_vft;
					 	ac_cc = 0;
					 	ac_at = 0;
					 	cout<<"\n\tPunto de Venta\n\n"<<endl;
					 	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> ac_nn;
						
					 	do
						{
							cout<<"Ingrese el valor del producto " <<ac_cc+1 <<": " ;   cin>> ac_xx;
							ac_cc = ac_at+1;
							ac_at = ac_at+ac_xx;
					 	}
					 	while(ac_cc<ac_nn);
					 	
					 	ac_vb = ac_at;
					 	ac_viva = ac_vb*0.12;
					 	ac_vdes = ac_vb*0.10;
					 	ac_vfi = ac_vb+ac_viva;
					 	ac_vft = ac_vfi-ac_vdes;
					 	cout<<"\n\tResultado\n\n"<<endl;
					 	cout<<"Valor con iva es: "<<ac_vfi<<endl;
					 	cout<<"Valor final es: "<<ac_vft<<endl;
						 cout<<"//================================================"<<endl;
					 	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
					 	cout<<"//==> Archivo : QuiÃ±onezAlisson-puntoventa.cpp"<<endl;
					 	cout<<"//==>Autor: Alisson QuiÃ±onez"<<endl;
					 	cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
					 	cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
					 	cout<<"//================================================="<<endl;
							cout<<"Presione enter nuevamente para regresar al menÃº";
							system("pause>null");
					break;
					case 5:
					int ac_ax, ac_bx, ac_cx;
						cout<<"\n\tSUMA DE 2 NÃšMEROS"<<endl;
						cout<<"Ingrese el primer nÃºmero a sumar: "; cin>>ac_ax;
						cout<<"Ingrese el segundo nÃºmero a sumar: "; cin>>ac_bx;
						ac_cx = ac_ax+ac_bx;
						cout<<"\n\tResultado"<<endl;
						cout<<"El resultado de la suma entre "<<ac_ax<<" + "<<ac_bx<<" es igual a: "<<ac_cx<<endl;
						cout<<"//================================================"<<endl;
						cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
						cout<<"//==> Archivo : QuiÃ±onezAlisson-suma.cpp"<<endl;
						cout<<"//==>Autor: Alisson QuiÃ±onez"<<endl;
						cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
						cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
						cout<<"//================================================="<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 6:
						system("cls");
						goto menu;
						system("pause>null");
						getchar();
						
					break;
						
					case 0:
						repetir = false;
					break;				
				}
				}
				while(repetir);
				
				return 0;
			break;
				
			case 3:
						     	do
	              	{
				    	system("cls");
				    	cout<<"\n\n\t\t\t----------Fundamentos de Programacion-----------"<<endl;
					 cout<<"\t\t\t--------------Sub MenÃº de Opciones--------------"<<endl;
				 	cout<<"\t\t\t------------------------------------------------"<<endl;
					 cout<<"1. Comparar numeros"<<endl;
				 	cout<<"2. Cuenta monedas"<<endl;
				 	cout<<"3. Calcular la edad"<<endl;
				 	cout<<"4. Punto de venta"<<endl;
				 	cout<<"5. Suma de dos numeros "<<endl;
				 	cout<<"6. Regresar al menu principal"<<endl;
				 	cout<<"0. Salir"<<endl;
				 	cout<<"Ingrese una opciÃ³n: "; cin>>opcion2;
				 	switch(opcion2)
			     	{
					case 1:
						 int cz_aa, cz_bb ;
							cout<<"Ingrese el primer numero a comparar: ";  cin>> cz_aa;  
							cout<<"Ingrese el segundo numero a comparar: ";  cin>> cz_bb;
							if (cz_aa==cz_bb)
								cout<<"Son iguales"<<endl;
							else
								if (cz_aa>cz_bb)
									cout<<cz_aa<<" es mayor"<<endl;
								else
									cout<<cz_bb<<" es mayor"<<endl;
				    	cout<<"//================================================"<<endl;
                        cout<<"Nombre del programa: comparar nÃºmeros"<<endl;
                        cout<<"Archivo: MochaCesar-comprara.cpp"<<endl;
                        cout<<"Autor: Cesar mocha"<<endl;
                        cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                        cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                        cout<<"//================================================"<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 2:
						int cz_n, cz_c, cz_c1, cz_c2, cz_cl, cz_cz;
						float cz_x, cz_al, cz_a, cz_a1, cz_a2, cz_az;
						cz_c = 0;
						cz_c1 = 0;
						cz_c2 = 0;
						cz_a = 0;
						cz_a1 = 0;
						cz_a2 = 0;
						cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
						cout<<"Cantidad de monedas a ingresar: ";  cin>>cz_n;
						do
						{
						
							cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>cz_x;
							cz_c = cz_c+1;
							cz_a = cz_a+cz_x;
							if(cz_x==0.25)
							{
								cz_c1 = cz_c1+1;
								cz_a1 = cz_x+cz_a1;
							}
							else
								{
									cz_c2 = cz_c2+1;
									cz_a2 = cz_a2+cz_x;
								}
					   }
						while(cz_c<cz_n);
						cout<<"\n\tRESULTADOS\n\n"<<endl;
						cout<<"Cantidad de monedas ingresadas: "<<cz_c<<endl;
						cout<<"Cantidad total de dinero contado: "<<cz_a<<endl;
						cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<cz_c2<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.10: "<<cz_a2<<endl;
						cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<cz_c1<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.25: "<<cz_a1<<endl;
					 cout<<"//================================================"<<endl;
                     cout<<"Nombre del programa: cuenta moneda"<<endl;
                     cout<<"Archivo: mochacesar-cuentamoneda.cpp"<<endl;
                     cout<<"Autor: Cesar Mocha"<<endl;
                     cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                     cout<<"Fecha de actualizacion: 13-05-2022"<<endl;
                     cout<<"//================================================"<<endl;
						system("pause>null");
					break;
					case 3:
						int cz_diaAct; 
						int cz_mesAct; 
						int cz_anoAct; 
		
						int cz_diaNac; 
						int cz_mesNac; 
						int cz_anoNac;
						
						int cz_anoR, cz_mesR, cz_diaR;
		
						cout<<"\n\tCalcular la Edad\n\n";
						cout << "Ingrese AÃ±o Actual: ";   cin >> cz_anoAct;
						cout << "Ingrese Mes Actual: ";   cin >> cz_mesAct;
						cout << "Ingrese Dia Actual: ";  cin >> cz_diaAct;
		
						cout << "\nIngrese AÃ±o Nacimiento: ";  cin >> cz_anoNac;
						cout << "Ingrese Mes de Nacimiento: ";  cin >> cz_mesNac;
						cout << "Ingrese Dia de Nacimiento: ";  cin >> cz_diaNac;
						
						if (cz_anoAct > cz_anoNac)
						{
							if(cz_mesAct > cz_mesNac)	 
							{
								cz_anoR=cz_anoAct-cz_anoNac;	
								cz_mesR=cz_mesAct-cz_mesNac;					
							}
							else
							{
								cz_anoR=cz_anoAct-cz_anoNac-1;	
								cz_mesR=(cz_mesAct+12)-cz_mesNac;					
							}
							
											
							if(cz_diaAct > cz_diaNac)
							{
								
								cz_diaR=cz_diaAct-cz_diaNac;
							}
							else
							{
								cz_mesR=cz_mesR-1;
								cz_diaR=(cz_diaAct+30)-cz_diaNac;
							}
							
							cout << "\ntienes una edad de:\n";
						    cout << " Edad: " <<cz_anoR<< endl;
						    cout << " Mes: " <<cz_mesR << endl;
						    cout << " Dia: " << cz_diaR << endl;
							
							
					        	}
						     else
					     	{
							cout << "\n Calculo no es posible ";
				          	}
				         	cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: calcular la edad"<<endl;
                             cout<<"Archivo: mochacesar-laedad.cpp"<<endl;
                             cout<<"Autor: Cesar Mocha"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
					      	system("pause>null");
					break;
					case 4:
							float cz_xx, cz_cc, cz_at, cz_nn, cz_vb, cz_viva, cz_vdes, cz_vfi, cz_vft;
						cz_cc = 0;
						cz_at = 0;
						cout<<"\n\tPunto de Venta\n\n"<<endl;
						cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> cz_nn;
						
						do
						{
							cout<<"Ingrese el valor del producto " <<cz_cc+1 <<": " ;   cin>> cz_xx;
							cz_cc = cz_cc+1;
							cz_at = cz_at+cz_xx;
						}
						while(cz_cc<cz_nn);
						
						cz_vb = cz_at;
						cz_viva = cz_vb*0.12;
						cz_vdes = cz_vb*0.10;
						cz_vfi = cz_vb+cz_viva;
						cz_vft = cz_vfi-cz_vdes;
						cout<<"\n\tResultado\n\n"<<endl;
						cout<<"Valor con iva es: "<<cz_vfi<<endl;
						cout<<"Valor final es: "<<cz_vft<<endl;
						cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: punto de venta"<<endl;
                             cout<<"Archivo: mochacesar-puntoventa.cpp"<<endl;
                             cout<<"Autor: Cesar Mochar"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
							system("pause>null");
					break;
					case 5:
					int cz_ax, cz_bx, cz_cx;
						cout<<"\n\tSUMA DE 2 NÃšMEROS"<<endl;
						cout<<"Ingrese el primer nÃºmero a sumar: "; cin>>cz_ax;
						cout<<"Ingrese el segundo nÃºmero a sumar: "; cin>>cz_bx;
						cz_cx = cz_ax+cz_bx;
						cout<<"\n\tResultado"<<endl;
						cout<<"El resultado de la suma entre "<<cz_ax<<" + "<<cz_bx<<" es igual a: "<<cz_cx<<endl;
						cout<<"//================================================"<<endl;
						cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
						cout<<"//==> Archivo : cesarmocha-suma.cpp"<<endl;
						cout<<"//==>Autor: Cesar Mocha"<<endl;
						cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
						cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
						cout<<"//================================================="<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 6:
						system("cls");
						goto menu;
						system("pause>null");
						getchar();
						
					break;
						
					case 0:
						repetir = false;
					break;				
				}
				}
				while(repetir);
				
				return 0;
			break;
					
			case 4:
						     	do
	              	{
				    	system("cls");
				    	cout<<"\n\n\t\t\t----------Fundamentos de Programacion-----------"<<endl;
					 cout<<"\t\t\t--------------Sub MenÃº de Opciones--------------"<<endl;
				 	cout<<"\t\t\t------------------------------------------------"<<endl;
					 cout<<"1. Comparar nÃºmeros"<<endl;
				 	cout<<"2. Cuenta monedas"<<endl;
				 	cout<<"3. Calcular la edad"<<endl;
				 	cout<<"4. Punto de venta"<<endl;
				 	cout<<"5. Suma de dos numeros "<<endl;
				 	cout<<"6. Regresar al menu principal"<<endl;
				 	cout<<"0. Salir"<<endl;
				 	cout<<"Ingrese una opciÃ³n: "; cin>>opcion2;
				 	switch(opcion2)
			     	{
					case 1:
						 int aa_aa, aa_bb ;
							cout<<"Ingrese el primer numero a comparar: ";  cin>> aa_aa;  
							cout<<"Ingrese el segundo numero a comparar: ";  cin>> aa_bb;
							if (aa_aa==aa_bb)
								cout<<"Son iguales"<<endl;
							else
								if (aa_aa>aa_bb)
									cout<<aa_aa<<" es mayor"<<endl;
								else
									cout<<aa_bb<<" es mayor"<<endl;
				    	cout<<"//================================================"<<endl;
                        cout<<"Nombre del programa: comparar nÃºmeros"<<endl;
                        cout<<"Archivo: anceariel-comprara.cpp"<<endl;
                        cout<<"Autor: Ariel Ance"<<endl;
                        cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                        cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                        cout<<"//================================================"<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 2:
						int aa_n, aa_c, aa_c1, aa_c2, aa_cl, aa_cz;
						float aa_x, aa_al, aa_a, aa_a1, aa_a2, aa_az;
						aa_c = 0;
						aa_c1 = 0;
						aa_c2 = 0;
						aa_a = 0;
						aa_a1 = 0;
						aa_a2 = 0;
						cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
						cout<<"Cantidad de monedas a ingresar: ";  cin>>aa_n;
						do
						{
						
							cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>aa_x;
							aa_c = aa_c+1;
							aa_a = aa_a+aa_x;
							if(aa_x==0.25)
							{
								aa_c1 = aa_c1+1;
								aa_a1 = aa_x+aa_a1;
							}
							else
								{
									aa_c2 = aa_c2+1;
									aa_a2 = aa_a2+aa_x;
								}
					   }
						while(aa_c<aa_n);
						cout<<"\n\tRESULTADOS\n\n"<<endl;
						cout<<"Cantidad de monedas ingresadas: "<<aa_c<<endl;
						cout<<"Cantidad total de dinero contado: "<<aa_a<<endl;
						cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<aa_c2<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.10: "<<aa_a2<<endl;
						cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<aa_c1<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.25: "<<aa_a1<<endl;
					 cout<<"//================================================"<<endl;
                     cout<<"Nombre del programa: cuenta moneda"<<endl;
                     cout<<"Archivo:anceariel-cuentamoneda.cpp"<<endl;
                     cout<<"Autor: Ariel Ance"<<endl;
                     cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                     cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                     cout<<"//================================================"<<endl;
						system("pause>null");
					break;
					case 3:
						int aa_diaAct; 
						int aa_mesAct; 
						int aa_anoAct; 
		
						int aa_diaNac; 
						int aa_mesNac; 
						int aa_anoNac;
						
						int aa_anoR, aa_mesR, aa_diaR;
		
						cout<<"\n\tCalcular la Edad\n\n";
						cout << "Ingrese AÃ±o Actual: ";   cin >> aa_anoAct;
						cout << "Ingrese Mes Actual: ";   cin >> aa_mesAct;
						cout << "Ingrese Dia Actual: ";  cin >> aa_diaAct;
		
						cout << "\nIngrese AÃ±o Nacimiento: ";  cin >> aa_anoNac;
						cout << "Ingrese Mes de Nacimiento: ";  cin >> aa_mesNac;
						cout << "Ingrese Dia de Nacimiento: ";  cin >> aa_diaNac;
						
						if (aa_anoAct > aa_anoNac)
						{
							if(aa_mesAct > aa_mesNac)	 
							{
								aa_anoR=aa_anoAct-aa_anoNac;	
								aa_mesR=aa_mesAct-aa_mesNac;					
							}
							else
							{
								aa_anoR=aa_anoAct-aa_anoNac-1;	
								aa_mesR=(aa_mesAct+12)-aa_mesNac;					
							}
							
											
							if(aa_diaAct > aa_diaNac)
							{
								
								aa_diaR=aa_diaAct-aa_diaNac;
							}
							else
							{
								aa_mesR=aa_mesR-1;
								aa_diaR=(aa_diaAct+30)-aa_diaNac;
							}
							
							cout << "\ntienes una edad de:\n";
						    cout << " Edad: " <<aa_anoR<< endl;
						    cout << " Mes: " <<aa_mesR << endl;
						    cout << " Dia: " << aa_diaR << endl;
							
							
					        	}
						     else
					     	{
							cout << "\n Calculo no es posible ";
				          	}
				         	cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: calcular la edad"<<endl;
                             cout<<"Archivo: anceariel-laedad.cpp"<<endl;
                             cout<<"Autor: Ariel ance"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
					      	system("pause>null");
					break;
					case 4:
							float aa_xx, aa_cc, aa_at, aa_nn, aa_vb, aa_viva, aa_vdes, aa_vfi, aa_vft;
						aa_cc = 0;
						aa_at = 0;
						cout<<"\n\tPunto de Venta\n\n"<<endl;
						cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> aa_nn;
						
						do
						{
							cout<<"Ingrese el valor del producto " <<aa_cc+1 <<": " ;   cin>> aa_xx;
							aa_cc = aa_cc+1;
							aa_at = aa_at+aa_xx;
						}
						while(aa_cc<aa_nn);
						
						aa_vb = aa_at;
						aa_viva = aa_vb*0.12;
						aa_vdes = aa_vb*0.10;
						aa_vfi = aa_vb+aa_viva;
						aa_vft = aa_vfi-aa_vdes;
						cout<<"\n\tResultado\n\n"<<endl;
						cout<<"Valor con iva es: "<<aa_vfi<<endl;
						cout<<"Valor final es: "<<aa_vft<<endl;
						cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: punto de venta"<<endl;
                             cout<<"Archivo: anceariel-puntoventa.cpp"<<endl;
                             cout<<"Autor: Ariel Ance"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
							system("pause>null");
					break;
					case 5:
					int aa_ax, aa_bx, aa_cx;
						cout<<"\n\tSUMA DE 2 NÃšMEROS"<<endl;
						cout<<"Ingrese el primer nÃºmero a sumar: "; cin>>aa_ax;
						cout<<"Ingrese el segundo nÃºmero a sumar: "; cin>>aa_bx;
						aa_cx = aa_ax+aa_bx;
						cout<<"\n\tResultado"<<endl;
						cout<<"El resultado de la suma entre "<<aa_ax<<" + "<<aa_bx<<" es igual a: "<<aa_cx<<endl;
						cout<<"//================================================"<<endl;
						cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
						cout<<"//==> Archivo : anceariel-suma.cpp"<<endl;
						cout<<"//==>Autor: Ariel Ance"<<endl;
						cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
						cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
						cout<<"//================================================="<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 6:
						system("cls");
						goto menu;
						system("pause>null");
						getchar();
						
					break;
						
					case 0:
						repetir = false;
					break;				
				}
				}
				while(repetir);
				
				return 0;
			break;
			
			case 5:
			     	do
	              	{
				    	system("cls");
				    	cout<<"\n\n\t\t\t----------Fundamentos de Programacion-----------"<<endl;
					 cout<<"\t\t\t--------------Sub MenÃº de Opciones--------------"<<endl;
				 	cout<<"\t\t\t------------------------------------------------"<<endl;
					 cout<<"1. Comparar numeros"<<endl;
				 	cout<<"2. Cuenta monedas"<<endl;
				 	cout<<"3. Calcular la edad"<<endl;
				 	cout<<"4. Punto de venta"<<endl;
				 	cout<<"5. Suma de dos numeros "<<endl;
				 	cout<<"6. Regresar al menu principal"<<endl;
				 	cout<<"0. Salir"<<endl;
				 	cout<<"Ingrese una opciÃ³n: "; cin>>opcion2;
				 	switch(opcion2)
			     	{
					case 1:
						 int dl_aa, dl_bb ;
							cout<<"Ingrese el primer numero a comparar: ";  cin>> dl_aa;  
							cout<<"Ingrese el segundo numero a comparar: ";  cin>> dl_bb;
							if (dl_aa==dl_bb)
								cout<<"Son iguales"<<endl;
							else
								if (dl_aa>dl_bb)
									cout<<dl_aa<<" es mayor"<<endl;
								else
									cout<<dl_bb<<" es mayor"<<endl;
				    	cout<<"//================================================"<<endl;
                        cout<<"Nombre del programa: comparar monedas"<<endl;
                        cout<<"Archivo: vallejodario-comprara.cpp"<<endl;
                        cout<<"Autor: Dario Vallejo"<<endl;
                        cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                        cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                        cout<<"//================================================"<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 2:
						int dl_n, dl_c, dl_c1, dl_c2, dl_cl, dl_cz;
						float dl_x, dl_al, dl_a, dl_a1, dl_a2, dl_az;
						dl_c = 0;
						dl_c1 = 0;
						dl_c2 = 0;
						dl_a = 0;
						dl_a1 = 0;
						dl_a2 = 0;
						cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
						cout<<"Cantidad de monedas a ingresar: ";  cin>>dl_n;
						do
						{
						
							cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>dl_x;
							dl_c = dl_c+1;
							dl_a = dl_a+dl_x;
							if(dl_x==0.25)
							{
								dl_c1 = dl_c1+1;
								dl_a1 = dl_x+dl_a1;
							}
							else
								{
									dl_c2 = dl_c2+1;
									dl_a2 = dl_a2+dl_x;
								}
					   }
						while(dl_c<dl_n);
						cout<<"\n\tRESULTADOS\n\n"<<endl;
						cout<<"Cantidad de monedas ingresadas: "<<dl_c<<endl;
						cout<<"Cantidad total de dinero contado: "<<dl_a<<endl;
						cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<dl_c2<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.10: "<<dl_a2<<endl;
						cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<dl_c1<<endl;
						cout<<"Cantidad total en dinero de las monedas de $0.25: "<<dl_a1<<endl;
					 cout<<"//================================================"<<endl;
                     cout<<"Nombre del programa: cuenta moneda"<<endl;
                     cout<<"Archivo: vallejodario-cuentamoneda.cpp"<<endl;
                     cout<<"Autor: Dario Valllejo"<<endl;
                     cout<<"Fecha de elaboracion:29-04-2022"<<endl;
                     cout<<"Fecha de actualizacion: 18-05-2022"<<endl;
                     cout<<"//================================================"<<endl;
						system("pause>null");
					break;
					case 3:
						int dl_diaAct; 
						int dl_mesAct; 
						int dl_anoAct; 
		
						int dl_diaNac; 
						int dl_mesNac; 
						int dl_anoNac;
						
						int dl_anoR, dl_mesR, dl_diaR;
		
						cout<<"\n\tCalcular la Edad\n\n";
						cout << "Ingrese AÃ±o Actual: ";   cin >> dl_anoAct;
						cout << "Ingrese Mes Actual: ";   cin >> dl_mesAct;
						cout << "Ingrese Dia Actual: ";  cin >> dl_diaAct;
		
						cout << "\nIngrese AÃ±o Nacimiento: ";  cin >> dl_anoNac;
						cout << "Ingrese Mes de Nacimiento: ";  cin >> dl_mesNac;
						cout << "Ingrese Dia de Nacimiento: ";  cin >> dl_diaNac;
						
						if (dl_anoAct > dl_anoNac)
						{
							if(dl_mesAct > dl_mesNac)	 
							{
								dl_anoR=dl_anoAct-dl_anoNac;	
								dl_mesR=dl_mesAct-dl_mesNac;					
							}
							else
							{
								dl_anoR=dl_anoAct-dl_anoNac-1;	
								dl_mesR=(dl_mesAct+12)-dl_mesNac;					
							}
							
											
							if(dl_diaAct > dl_diaNac)
							{
								
								dl_diaR=dl_diaAct-dl_diaNac;
							}
							else
							{
								dl_mesR=dl_mesR-1;
								dl_diaR=(dl_diaAct+30)-dl_diaNac;
							}
							
							cout << "\ntienes una edad de:\n";
						    cout << " Edad: " <<dl_anoR<< endl;
						    cout << " Mes: " <<dl_mesR << endl;
						    cout << " Dia: " << dl_diaR << endl;
							
							
					        	}
						     else
					     	{
							cout << "\n Calculo no es posible ";
				          	}
				         	cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: Calcular la edad"<<endl;
                             cout<<"Archivo: vallejodario-laedad.cpp"<<endl;
                             cout<<"Autor: Dario Vallejo"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
					      	system("pause>null");
					break;
					case 4:
							float dl_xx, dl_cc, dl_at, dl_nn, dl_vb, dl_viva, dl_vdes, dl_vfi, dl_vft;
						dl_cc = 0;
						dl_at = 0;
						cout<<"\n\tPunto de Venta\n\n"<<endl;
						cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> dl_nn;
						
						do
						{
							cout<<"Ingrese el valor del producto " <<dl_cc+1 <<": " ;   cin>> dl_xx;
							dl_cc = dl_cc+1;
							dl_at = dl_at+dl_xx;
						}
						while(dl_cc<dl_nn);
						
						dl_vb = dl_at;
						dl_viva = dl_vb*0.12;
						dl_vdes = dl_vb*0.10;
						dl_vfi = dl_vb+dl_viva;
						dl_vft = dl_vfi-dl_vdes;
						cout<<"\n\tResultado\n\n"<<endl;
						cout<<"Valor con iva es: "<<dl_vfi<<endl;
						cout<<"Valor final es: "<<dl_vft<<endl;
						cout<<"//================================================"<<endl;
                             cout<<"Nombre del programa: punto de venta"<<endl;
                             cout<<"Archivo: vallejodario-puntoventa.cpp"<<endl;
                             cout<<"Autor: Dario Vallejo"<<endl;
                             cout<<"Fecha de elaboraciÃ³n:29-04-2022"<<endl;
                             cout<<"Fecha de actualizaciÃ³n: 18-05-2022"<<endl;
                             cout<<"//================================================"<<endl;
						     cout<<"Presione enter nuevamente para regresar al menÃº";
							system("pause>null");
					break;
					case 5:
					int dl_ax, dl_bx, dl_cx;
						cout<<"\n\tSUMA DE 2 NÃšMEROS"<<endl;
						cout<<"Ingrese el primer nÃºmero a sumar: "; cin>>dl_ax;
						cout<<"Ingrese el segundo nÃºmero a sumar: "; cin>>dl_bx;
						dl_cx = dl_ax+dl_bx;
						cout<<"\n\tResultado"<<endl;
						cout<<"El resultado de la suma entre "<<dl_ax<<" + "<<dl_bx<<" es igual a: "<<dl_cx<<endl;
						cout<<"//================================================"<<endl;
						cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
						cout<<"//==> Archivo : vallejodario-suma.cpp"<<endl;
						cout<<"//==>Autor: Dario Vallejo"<<endl;
						cout<<"//==>Fecha de elaboraciÃ³n: 2022-04-29"<<endl;
						cout<<"//==>Fecha ultima actualizaciÃ³n: 2022-05-18"<<endl;
						cout<<"//================================================="<<endl;
						cout<<"Presione enter nuevamente para regresar al menÃº";
						system("pause>null");
					break;
					case 6:
						system("cls");
						goto menu;
						system("pause>null");
						getchar();
						
					break;
						
					case 0:
						repetir = false;
					break;				
				}
				}
				while(repetir);
				
				return 0;
			break;	
			
			case 6:
				cout<<"\n\tSUMA\n\n"<<endl;
				system("pause>null");
			break;
			
			case 0:
				repetir = false;
				//system("pause>null");
			break;
		}

	}
	while(repetir);
	
	return 0;
}

