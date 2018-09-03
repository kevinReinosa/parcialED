
#include <stdio.h>

int main(){
	//pedimos el tamaño del array
	
  int i,t;
printf("Ingrese el tamaño del vector");
	   scanf("%d",&t);
	   //llenamos el array
    int array[t];
   for (i = 0; i < t; i++)
   {
	printf("ingrese un valor");   
   scanf("%d",&array[i]);  
   }
   //pedimos la posicion para borrar
   int p;
   printf("que posiscion desea borra");
    scanf("%d",&p);
    int n=p-1;   
    for (i =n; i <(t-1); i++)
	{
	array[i]=array[i+1];	
	}
	//mostramos el array con un dato borrado
  for (i = 0; i < t; i++)
  {
	  printf("%d",array[i]);
  }
  
   
 	return 0;
	}
