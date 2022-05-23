//Funciones de dario vallejo
int DL_compara()
{
	int DL_aa, DL_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> DL_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> DL_bb;
	if (DL_aa==DL_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (DL_aa>DL_bb)
		{
		cout<<DL_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<DL_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : vallejodario-compara.cpp"<<endl;
	cout<<"//==>Autor: Dario vallejo"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int DL_cuentamoneda()
{
	int DL_n,DL_c, DL_c1, DL_c2,DL_cl, DL_cz;
	float DL_x, DL_al, DL_a, DL_a1, DL_a2, DL_az;
	DL_c = 0;
	DL_c1 = 0;
	DL_c2 = 0;
	DL_a = 0;
	DL_a1 = 0;
	DL_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>DL_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>DL_x;
		DL_c = DL_c+1;
		DL_a = DL_a+DL_x;
		if(DL_x==0.25)
			{
				DL_c1 = DL_c1+1;
				DL_a1 = DL_x+DL_a1;
			}
		else
			{
				DL_c2 = DL_c2+1;
				DL_a2 = DL_a2+DL_x;
			}
	}
	while(DL_c<DL_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<DL_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<DL_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<DL_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<DL_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<DL_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<DL_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : vallejodario-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Dario Vallejo"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int DL_laedad()
{
	int DL_diaAct; 
	int DL_mesAct; 
	int DL_anoAct; 
	int DL_diaNac; 
	int DL_mesNac; 
	int DL_anoNac;			
	int DL_anoR, DL_mesR, DL_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> DL_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> DL_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> DL_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> DL_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> DL_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> DL_diaNac;			
	if (DL_anoAct > DL_anoNac)
	{
		if(DL_mesAct > DL_mesNac)	 
		{
			DL_anoR=DL_anoAct-DL_anoNac;	
			DL_mesR=DL_mesAct-DL_mesNac;					
		}
		else
		{
			DL_anoR=DL_anoAct-DL_anoNac-1;	
			DL_mesR=(DL_mesAct+12)-DL_mesNac;					
		}												
		if(DL_diaAct > DL_diaNac)
		{				
			DL_diaR=DL_diaAct-DL_diaNac;
		}
		else
		{
			DL_mesR=DL_mesR-1;
			DL_diaR=(DL_diaAct+30)-DL_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<DL_anoR<< endl;
		cout << " Mes: " <<DL_mesR << endl;
		cout << " Dia: " << DL_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: vallejodario-laedad.cpp"<<endl;
    cout<<"//==========Autor: Dario Vallejo"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int DL_PuntoVenta()
{
	float DL_xx, DL_cc, DL_at, DL_nn, DL_vb, DL_viva, DL_vdes, DL_vfi, DL_vft;
	DL_cc = 0;
	DL_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> DL_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<DL_cc+1 <<": " ;   cin>> DL_xx;
		DL_cc = DL_cc+1;
		DL_at = DL_at+DL_xx;
	}
	while(DL_cc<DL_nn);			
	DL_vb = DL_at;
	DL_viva = DL_vb*0.12;
	DL_vdes = DL_vb*0.10;
	DL_vfi = DL_vb+DL_viva;
	DL_vft = DL_vfi-DL_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<DL_vfi<<endl;
	cout<<"Valor final es: "<<DL_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : vallejodario-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Dario Vallejo"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int DL_Suma()
{
	int DL_ax, DL_bx, DL_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>DL_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>DL_bx;
	DL_cx = DL_ax+DL_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<DL_ax<<" + "<<DL_bx<<" es igual a: "<<DL_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : vallejodario-suma.cpp"<<endl;
	cout<<"//==>Autor: Dario Vallejo"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int DL_Menu()
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
				DL_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				DL_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				DL_laedad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				DL_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				DL_Suma();
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
