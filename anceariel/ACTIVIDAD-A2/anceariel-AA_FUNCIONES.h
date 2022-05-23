//fuciones de Ariel Ance
int AA_compara()
{
	int AA_aa, AA_bb ;
 	cout<<"Ingrese el primer numero a comparar: ";  cin>> AA_aa;  
 	cout<<"Ingrese el segundo numero a comparar: ";  cin>> AA_bb;
	if (AA_aa==AA_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (AA_aa>AA_bb)
		{
		cout<<AA_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<AA_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara"<<endl;
	cout<<"//==> Archivo : anceariel-Compara.cpp"<<endl;
	cout<<"//==>Autor: Ariel Ance"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AA_cuentamoneda()
{
	int AA_n,AA_c, AA_c1, AA_c2, AA_cl, AA_cz;
	float AA_x, AA_al, AA_a, AA_a1, AA_a2, AA_az;
	AA_c = 0;
	AA_c1 = 0;
	AA_c2 = 0;
	AA_a = 0;
	AA_a1 = 0;
	AA_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>AA_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>AA_x;
		AA_c = AA_c+1;
		AA_a = AA_a+AA_x;
		if(AA_x==0.25)
			{
				AA_c1 = AA_c1+1;
				AA_a1 = AA_x+AA_a1;
			}
		else
			{
				AA_c2 = AA_c2+1;
				AA_a2 = AA_a2+AA_x;
			}
	}
	while(AA_c<AA_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<AA_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<AA_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<AA_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<AA_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<AA_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<AA_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : anceariel-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Ariel Ance"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AA_laedad()
{
	int AA_diaAct; 
	int AA_mesAct; 
	int AA_anoAct; 
	int AA_diaNac; 
	int AA_mesNac; 
	int AA_anoNac;			
	int AA_anoR, AA_mesR, AA_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> AA_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> AA_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> AA_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> AA_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> AA_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> AA_diaNac;			
	if (AA_anoAct > AA_anoNac)
	{
		if(AA_mesAct > AA_mesNac)	 
		{
			AA_anoR=AA_anoAct-AA_anoNac;	
			AA_mesR=AA_mesAct-AA_mesNac;					
		}
		else
		{
			AA_anoR=AA_anoAct-AA_anoNac-1;	
			AA_mesR=(AA_mesAct+12)-AA_mesNac;					
		}												
		if(AA_diaAct > AA_diaNac)
		{				
			AA_diaR=AA_diaAct-AA_diaNac;
		}
		else
		{
			AA_mesR=AA_mesR-1;
			AA_diaR=(AA_diaAct+30)-AA_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<AA_anoR<< endl;
		cout << " Mes: " <<AA_mesR << endl;
		cout << " Dia: " <<AA_diaR << endl;								
	}
	else
	{
		 cout << "\n Calculo no es posible ";
	}
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: anceariel-laedad.cpp"<<endl;
    cout<<"//==========Autor: Ariel Ance"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
	return 0;
}
int AA_PuntoVenta()
{
	float AA_xx, AA_cc, AA_at, AA_nn, AA_vb, AA_viva, AA_vdes, AA_vfi, AA_vft;
	AA_cc = 0;
	AA_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> AA_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<AA_cc+1 <<": " ;   cin>> AA_xx;
		AA_cc = AA_cc+1;
		AA_at = AA_at+AA_xx;
	}
	while(AA_cc<AA_nn);			
	AA_vb = AA_at;
	AA_viva = AA_vb*0.12;
	AA_vdes = AA_vb*0.10;
	AA_vfi = AA_vb+AA_viva;
	AA_vft = AA_vfi-AA_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<AA_vfi<<endl;
	cout<<"Valor final es: "<<AA_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de venta"<<endl;
	cout<<"//==> Archivo : anceariel-PuntoVenta.cpp"<<endl;
	cout<<"//==>Autor: Ariel Ance"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AA_Suma()
{
	int AA_ax, AA_bx, AA_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>AA_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>AA_bx;
	AA_cx = AA_ax+AA_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<AA_ax<<" + "<<AA_bx<<" es igual a: "<<AA_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : anceariel-SumaN.cpp"<<endl;
	cout<<"//==>Autor: Ariel Ance"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
int AA_Menu()
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
				AA_compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				AA_cuentamoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				AA_laedad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				AA_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				AA_Suma();
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
