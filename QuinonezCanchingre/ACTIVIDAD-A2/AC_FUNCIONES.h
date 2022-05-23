//fuciones de ALISSON QUIÑONEZ
int AC_compara()
{
	int AC_aa,AC_bb ;
 	cout<<"Ingrese el primer numero a comparar: "; cin>>AC_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> AC_bb;
	if (AC_aa==AC_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (AC_aa>AC_bb)
		{
		cout<<AC_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<AC_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : QuinonezAlisson-compara.cpp"<<endl;
	cout<<"//==>Autor: Alisson Quiñonez"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-21"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AC_cuentamoneda()
{
	int AC_n,AC_c, AC_c1, AC_c2, AC_cl, AC_cz;
	float AC_x, AC_al, AC_a, AC_a1, AC_a2,AC_az;
	AC_c = 0;
	AC_c1 = 0;
	AC_c2 = 0;
	AC_a = 0;
	AC_a1 = 0;
	AC_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>AC_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>AC_x;
		AC_c = AC_c+1;
		AC_a = AC_a+AC_x;
		if(AC_x==0.25)
			{
				AC_c1 = AC_c1+1;
				AC_a1 = AC_x+AC_a1;
			}
		else
			{
				AC_c2 = AC_c2+1;
				AC_a2 = AC_a2+AC_x;
			}
	}
	while(AC_c<AC_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<AC_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<AC_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<AC_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<AC_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<AC_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<AC_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : QuinonezAlisson-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Alisson Quiñonez"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AC_laedad()
{
	int AC_diaAct; 
	int AC_mesAct; 
	int AC_anoAct; 
	int AC_diaNac; 
	int AC_mesNac; 
	int AC_anoNac;			
	int AC_anoR, PV_mesR, PV_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> AC_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> AC_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> AC_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> AC_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> AC_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> AC_diaNac;			
	if (AC_anoAct > AC_anoNac)
	{
		if(AC_mesAct > AC_mesNac)	 
		{
			AC_anoR=AC_anoAct-AC_anoNac;	
			AC_mesR=AC_mesAct-AC_mesNac;					
		}
		else
		{
			AC_anoR=AC_anoAct-AC_anoNac-1;	
			AC_mesR=(AC_mesAct+12)-AC_mesNac;					
		}												
		if(AC_diaAct > AC_diaNac)
		{				
			AC_diaR=AC_diaAct-AC_diaNac;
		}
		else
		{
			AC_mesR=AC_mesR-1;
			AC_diaR=(AC_diaAct+30)-AC_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<AC_anoR<< endl;
		cout << " Mes: " <<AC_mesR << endl;
		cout << " Dia: " << AC_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: QuinonezAlisson-laedad.cpp"<<endl;
    cout<<"//==========Autor: Alisson Quiñonez "<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 21-05-2022"<<endl;
	return 0;
}
int AC_PuntoVenta()
{
	float AC_xx, AC_cc, AC_at, AC_nn, AC_vb, AC_viva, AC_vdes, AC_vfi, AC_vft;
	AC_cc = 0;
	AC_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> AC_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<AC_cc+1 <<": " ;   cin>> AC_xx;
		AC_cc = AC_cc+1;
		AC_at = AC_at+AC_xx;
	}
	while(AC_cc<AC_nn);			
	AC_vb = AC_at;
	AC_viva = AC_vb*0.12;
	AC_vdes = AC_vb*0.10;
	AC_vfi = AC_vb+AC_viva;
	AC_vft = AC_vfi-AC_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<AC_vfi<<endl;
	cout<<"Valor final es: "<<AC_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : QuinonezAlisson-puntoventa.cpp"<<endl;
	cout<<"//==>Autor: Quiñonez Alisson"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AC_Suma()
{
	int AC_ax, AC_bx, AC_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>AC_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>AC_bx;
	AC_cx = AC_ax+AC_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<AC_ax<<" + "<<AC_bx<<" es igual a: "<<AC_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : QuinonezAlisson-SumaN.cpp"<<endl;
	cout<<"//==>Autor: Alisson Quiñonez"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-21"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PV_Menu()
{
	int opcion, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
		cout<<"\t\t\t----------Fundamento de Programacion-----------"<<endl;
		cout<<"\t\t\t----------------Menú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. comparar numero"<<endl;
		cout<<"2. Cuenta monedas"<<endl;
		cout<<"3. Calcular la edad"<<endl;
		cout<<"4. Punto de venta"<<endl;
		cout<<"5. Suma de dos numeros"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opcion;
		switch (opcion)
		{
			
			case 1:
				system("cls");
				AC_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				AC_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				AC_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				AC_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				AC_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opcion!=0 && opcion>0)
			{
				cout << "\nopcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opcion==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
		}
	}
	while(opcion != 0);
	return(0);
}	
