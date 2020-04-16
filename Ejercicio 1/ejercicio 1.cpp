#include <iostream>
#include <stdlib.h>
#include <fstream>
#include<string>
#include <regex> 	
#include <fstream>
#include <stdio.h>
#include <sstream> 
#include <regex>
#include <iomanip>

#define datos "salario.txt"
#define datos1 "datos1.txt"

using namespace std;



float funcionsalario(float horas, float preciohora)
{
	float total1, multiplicador,residuo,textras,base,total;
	
	if (horas>40)
	{
		residuo=horas-40;
	}
	else
	{
	residuo=0;
	}
	
	textras=residuo*(preciohora*1.5);
	base=(horas-residuo)*preciohora;
	total1=base+textras;
	
	return total1;
}




int main()
{
	int x=1,eleccion;
   					remove(datos1);

float salarioxhora, cantidadhoras,prueba;

	while(x==1)
	{
		cout<<"Seleccione alguna opcion \n 1.Ingreso de datos. \n 2.Ver datos de planilla."<<endl;
		cin>>eleccion;
		system("cls");
		
		if (eleccion==1)
		
		{
			
		ofstream ingresosalario;
		ingresosalario.open(datos,ios::app);
		
	prueba =funcionsalario(cantidadhoras,salarioxhora);
		
		
	cout<<"Ingrese las horas trabajadas."<<endl;
	cin>>cantidadhoras;
	cout<<"Ingrese el sueldo por hora."<<endl;
	cin>>salarioxhora;
	
		prueba =funcionsalario(cantidadhoras,salarioxhora);
cout<<"\n"<<prueba<<endl;
	
	
	
		ingresosalario<<cantidadhoras<<"\t"<<salarioxhora<<"\t"<<prueba<<endl;
		ingresosalario.close();
		
				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
	
		}
		else {
			
			
			if(eleccion==2)
			{
float 	tcantidadh,tprecio,sumatoriahoras,sumatoriaprecio,ttotal,sumatoriaigss;		
		fstream estadisticas;
	estadisticas.open(datos,ios::in);
				 	while (estadisticas>>tcantidadh>>tprecio>>ttotal	){
sumatoriahoras=sumatoriahoras+tcantidadh;
sumatoriaprecio=sumatoriaprecio+ttotal;						 
			}	
			cout<<"La cantidad de horas procesadas fue de  "<<sumatoriahoras<<endl;
			cout<<"El total de pago por sueldos en planilla es de  "<<sumatoriaprecio<<endl;;
			sumatoriaigss=(sumatoriaprecio/100)*12.67;
		cout<<"El pago de IGSS es de  "<<sumatoriaigss<<endl;
			
				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
			}
		}
				
	}
	
	
	
	
}
		
