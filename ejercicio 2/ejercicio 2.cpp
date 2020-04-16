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

#define datos "almacenes.txt"
#define datos1 "datos1.txt"

using namespace std;


int  numlineas(){
	int lin=0;
 try{
    				ifstream lectura;

		lectura.open(datos,ios::in);

    	  while(lectura.good()) if(lectura.get()=='\n') lin++;
  lectura.close();	}
		catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		system("Pause");	}
   return lin;
}



int main()
{
	int x=1,eleccion;
   					remove(datos1);
int numeroalmacen;
float monto, cantidadhoras,prueba;

	while(x==1)
	{
		cout<<"Seleccione alguna opcion \n 1.Ingreso de datos. \n 2.Ver estadisticas."<<endl;
		cin>>eleccion;
		system("cls");
		
		if (eleccion==1)
		
		{
			
			
			cout<<"Seleccion el numero de almacen de  1 a 10;"<<endl;
			cin>>numeroalmacen;
			cout<<"Ingrese monto vendido"<<endl;
			cin>>monto;
		ofstream ventalmacen;
		ventalmacen.open(datos,ios::app);		
		ventalmacen<<numeroalmacen<<"\t"<<monto<<endl;
		ventalmacen.close();
	
		}
		else {
			
			
			if(eleccion==2)
			{int lineas;
			lineas=numlineas();
				int talmacen;float tmonto, almacen[10],media;
				
				for(int x=1;x<11;x++)
				{
					almacen[x]=0;
					
				}
		fstream estadisticas;
	estadisticas.open(datos,ios::in);
				 	while (estadisticas>>talmacen>>tmonto	){

					switch (talmacen)
					
					{
						case 1:
almacen[1]=almacen[1]+tmonto;
						break;
						case 2:
						almacen[2]=almacen[2]+tmonto;

						break;
							case 3:
						almacen[3]=almacen[3]+tmonto;

						break;
							case 4:
						almacen[4]=almacen[4]+tmonto;

						break;
							case 5:
						almacen[5]=almacen[5]+tmonto;

						break;
							case 6:
						almacen[6]=almacen[6]+tmonto;

						break;
							case 7:
						almacen[7]=almacen[7]+tmonto;

						break;
							case 8:
						almacen[8]=almacen[8]+tmonto;

						break;
							case 9:
						almacen[9]=almacen[9]+tmonto;

						break;
							case 10:
						almacen[10]=almacen[10]+tmonto;

						break;
					}
					
					

				
			}	
			media=(almacen[1]+almacen[2]+almacen[3]+almacen[4]+almacen[5]+almacen[6]+almacen[7]+almacen[8]+almacen[9]+almacen[10])/10;
			
			cout<<"La media de ventas es de  "<<media<<endl;
	cout<<"\n"<<"El total del almacen 1 es de   "<<almacen[1]<<endl;

					cout<<"El total del almacen  2 es de   "<<almacen[2]<<endl;

					cout<<"El total del almacen  3 es de   "<<almacen[3]<<endl;

					cout<<"El total del almacen  4 es de   "<<almacen[4]<<endl;

					cout<<"El total del almacen  5 es de   "<<almacen[5]<<endl;

					cout<<"El total del almacen  6 es de   "<<almacen[6]<<endl;
					cout<<"El total del almacen  7 es de   "<<almacen[7]<<endl;
					cout<<"El total del almacen  8 es de   "<<almacen[8]<<endl;
					cout<<"El total del almacen  9 es de   "<<almacen[9]<<endl;
					cout<<"El total del almacen  10 es de   "<<almacen[10]<<endl;
					
					
					for (int y=1;y<11;y++)
					{
						if (almacen[y]>media)
						{
							cout<<"El almacen "<<y<<" es mayor a la media con "<<almacen[y]<<endl;
						}
					}
			
				cout<<"Desea regresar al menu principal escriba 1, de lo contrario cualquier digito  "<<endl;
		cin>>x;
			}
		}
				
	}
	
	
	
	
}
		
