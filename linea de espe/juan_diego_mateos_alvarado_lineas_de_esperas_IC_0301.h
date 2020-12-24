#include <stdio.h>
#include <stdlib.h>
int entradaCli[150];//@param arreglo entrada clientes
int cajas[50];//@param arreglo cajas
int cap_salidas[100];//@param arreglo capacidad salidas
int colaespera[100];//@param arreglo cola de espera
int hr_ini,hr_fin,No_cajas,cap_uni;//@brief declaramos las variables donde se guardarann los datos que se pidan 
int j,f,i,h;//@param estos contadores los declaramos para que cuenten como el mismo nombre lo menciona 
/*@param declaramos una funcion out que a su ves tiene una matriz de 50 
@param se declaran varios valores de tipo entero que son matrizes donde se guardan los valores y los devuelven
*/
int out[50];
int output[50];
int aux[50];
int auxi[50];
/*
@brief declaramos capacidadSalpara poder entrar y que haga operaciones 
@param dentro de esto se declaran las variables y contadores para que no nos muestre errores
@return nos retornara un valor de tipo void
*/

void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin);
/*
@brief declaramos Mostrartab para poder entrar y que haga operaciones 
@param dentro de esto se declaran las variables y contadores para que no nos muestre errores
@return nos retornara un valor de tipo void
*/
void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150], int cajas[50]);
/*
@brief declaramoscol_Espera para poder entrar y que haga operaciones 
@param dentro de esto se declaran las variables y contadores para que no nos muestre errores
@return nos retornara un valor de tipo void
*/
void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni);
//@param se declara la funcion principal
 int main()
 {

 	printf("==============================\n");
 	printf("GESTION DE LINEA DE ESPERA DE UN MERCADO\n ");
 	printf("==============================\n");
 	printf("ingresa el horario \n");
 	printf("ingresa hora de inicio\n:");
 	scanf("%i",&hr_ini);//@param hora de inicio
 	printf("ingresa hora  final\n:");
 	scanf("%i",&hr_fin); 	//@param hora final
 	printf("capacidad unitaria ");
 	scanf("%i",&cap_uni);//@param capacidad unitaria
 	printf("ingresa la cantidad de entrada de clientes por hora\n");//@param se cargan el numero  de clientes que entran en una hora
 	for(j=hr_ini;j<hr_fin;++j)
 	{
 		scanf("%i",&entradaCli[j]);
	}
	 printf("ingresa numero de cajas abiertas por hora\n");
	 for(f=hr_ini;f<hr_fin;++f)
	 {
	 	scanf("%i",&cajas[f]);//@param se cargan los valores al arreglo cajas[]
	 }

   Mostrartab(hr_ini,hr_fin,entradaCli, cajas);
   col_Espera(cajas, entradaCli, hr_ini, hr_fin, cap_uni);
	 return 0;

 }//fin de la funcion princ
 /*@brief funcion que obtiene  multiplicando el numero de cajas abiertas * la capacidad unitaria
 @return nos regresa un valor void
 */
