//
// FUNCIONES DE CESAR MOCHA
//
int CZ_Suma()
{
	int cz_ax, cz_bx, cz_cx;
	cout<<"\n\tSUMA DE 2 N�MEROS"<<endl;
	cout<<"Ingrese el primer n�mero a sumar: "; cin>>cz_ax;
	cout<<"Ingrese el segundo n�mero a sumar: "; cin>>cz_bx;
	cz_cx = cz_ax+cz_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<cz_ax<<" + "<<cz_bx<<" es igual a: "<<cz_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: cesar zambrano"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int CZ_CuentaMoneda()
{
	int cz_n, cz_c=0, cz_c1=0, cz_c2=0, cz_cl, cz_cz;
	float cz_x, cz_al, cz_a=0, cz_a1=0, cz_a2=0, cz_az;
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
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: cesar mocha "<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int CZ_PuntoVenta()

	float cz_xx, cz_cc=0, cz_at=0, cz_nn, cz_vb, cz_viva, cz_vdes, cz_vfi, cz_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> cz_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<zc_cc+1 <<": " ;   cin>> zc_xx;
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
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: cesar mocha"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int CZ_Edad()
{
	int cz_diaAct, cz_mesAct, cz_anoAct, cz_diaNac, cz_mesNac, cz_anoNac, cz_anoR, cz_mesR, cz_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese A�o Actual: ";   cin >> cz_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> cz_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> cz_diaAct;
	cout << "\nIngrese A�o Nacimiento: ";  cin >> cz_anoNac;
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
			cz_mesR=(cz_mesAct+12)cz_mesNac;					
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
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<cz_anoR<< endl;
		cout << " Mes: " <<cz_mesR << endl;
		cout << " Dia: " << cz_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int CZ_Compara()
{
	int cz_aa, cz_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> cz_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> LM_bb;
	if (cz_aa==cz_bb)
    	cout<<"Son iguales"<<endl;
}
	
	else
	{
		if (cz_aa>cz_bb)
		{
		cout<<cz_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<cz_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparaci�n"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: cesar mocha"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int CZ_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t----------------MEN� DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. CONTADOR DE MONEDAS"<<endl;
		cout<<"2. SUMA DE 2 NUMEROS"<<endl;
		cout<<"3. COMPARACION DE 2 NUMEROS"<<endl;
		cout<<"4. CALCULADORA DE EDAD"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MEN� PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCI�N: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				CZ_CuentaMoneda();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				CZ_Suma();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				CZ_Compara();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				CZ_Edad();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				CZ_PuntoVenta();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);
	return 0;
}
