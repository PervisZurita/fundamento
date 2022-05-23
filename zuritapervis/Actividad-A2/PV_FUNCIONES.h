//fuciones de PERVIS ZURITA
int PV_compara()
{
	int PV_aa, PV_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> PV_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> PV_bb;
	if (PV_aa==PV_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (PV_aa>PV_bb)
		{
		cout<<PV_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<PV_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Pervis zurita"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PV_cuentamoneda()
{
	int PV_n,PV_c, PV_c1, PV_c2, PV_cl, PV_cz;
	float PV_x, PV_al, PV_a, PV_a1, PV_a2, PV_az;
	PV_c = 0;
	PV_c1 = 0;
	PV_c2 = 0;
	PV_a = 0;
	PV_a1 = 0;
	PV_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>PV_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>PV_x;
		PV_c = PV_c+1;
		PV_a = PV_a+PV_x;
		if(PV_x==0.25)
			{
				PV_c1 = PV_c1+1;
				PV_a1 = PV_x+PV_a1;
			}
		else
			{
				PV_c2 = PV_c2+1;
				PV_a2 = PV_a2+PV_x;
			}
	}
	while(PV_c<PV_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<PV_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<PV_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<PV_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<PV_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<PV_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<PV_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Pervis Zurita"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PV_laadad()
{
	int PV_diaAct; 
	int PV_mesAct; 
	int PV_anoAct; 
	int PV_diaNac; 
	int PV_mesNac; 
	int PV_anoNac;			
	int PV_anoR, PV_mesR, PV_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> PV_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> PV_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> PV_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> PV_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> PV_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> PV_diaNac;			
	if (PV_anoAct > PV_anoNac)
	{
		if(PV_mesAct > PV_mesNac)	 
		{
			PV_anoR=PV_anoAct-PV_anoNac;	
			PV_mesR=PV_mesAct-PV_mesNac;					
		}
		else
		{
			PV_anoR=PV_anoAct-PV_anoNac-1;	
			PV_mesR=(PV_mesAct+12)-PV_mesNac;					
		}												
		if(PV_diaAct > PV_diaNac)
		{				
			PV_diaR=PV_diaAct-PV_diaNac;
		}
		else
		{
			PV_mesR=PV_mesR-1;
			PV_diaR=(PV_diaAct+30)-PV_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<PV_anoR<< endl;
		cout << " Mes: " <<PV_mesR << endl;
		cout << " Dia: " << PV_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: zuritapervis-laedad.cpp"<<endl;
    cout<<"//==========Autor: Zurita Pervis"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int PV_PuntoVenta()
{
	float PV_xx, PV_cc, PV_at, PV_nn, PV_vb, PV_viva, PV_vdes, PV_vfi, PV_vft;
	PV_cc = 0;
	PV_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> PV_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<PV_cc+1 <<": " ;   cin>> PV_xx;
		PV_cc = PV_cc+1;
		PV_at = PV_at+PV_xx;
	}
	while(PV_cc<PV_nn);			
	PV_vb = PV_at;
	PV_viva = PV_vb*0.12;
	PV_vdes = PV_vb*0.10;
	PV_vfi = PV_vb+PV_viva;
	PV_vft = PV_vfi-PV_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<PV_vfi<<endl;
	cout<<"Valor final es: "<<PV_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Pervis Zurita"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int PV_Suma()
{
	int PV_ax, PV_bx, PV_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>PV_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>PV_bx;
	PV_cx = PV_ax+PV_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<PV_ax<<" + "<<PV_bx<<" es igual a: "<<PV_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Pervis Zurita"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
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
		cout<<"\t\t\t----------------Submenú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. comparar numero"<<endl;
		cout<<"2. Cuenta monedas"<<endl;
		cout<<"3. Calcular la edad"<<endl;
		cout<<"4. Punto de venta"<<endl;
		cout<<"5. Suma de dos numeros"<<endl;
		cout<<"0. Para salir al menu principal"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opcion;
		switch (opcion)
		{
			
			case 1:
				system("cls");
				PV_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				PV_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				PV_laadad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				PV_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				PV_Suma();
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
