
#include <stdio.h>

int main(){

	double ganacia=0;
    int cine[5][5];
    	int opcion,i,j;
    	//llenamos los asientoc con 0
   for (i = 0; i < 5; i++)
   {
	   for (j = 0; j < 5; j++)
	   {
		 cine[i][j]=0;  
	   }
	   
   }
   
 //pediomos la opcion que desea el usuario
	printf("Menu de opciones\n 1.-Desea comprar una entrada\n 2.-Mostrar ganacias\n 3.-Salir\n");
	scanf("%d",&opcion);
	do{    
		// se ejecuta la opcion de llenar
		if (opcion==1)
	    {  int fil,col;
		    printf("Ingresa el numero de fila 1-5");
		     scanf("%d",&fil);		
	          printf("Ingresa el numero de columna 1-5");
		       scanf("%d",&col);	
	   if (cine[fil][col]==0)
	      { 
      	   cine[fil][col]=1;
      	    printf("Asiento vendido");	   
	         }else{
	         printf("El asiento ya esta vendido");
	         
		   }
	    }
	// se ejecuta la opcion de ganacia
	if (opcion==2)
	  {
	   for (i = 0; i <5; i++)
	    {
	      for (j = 0; j <5; j++)
	       {
			if (cine[i][j]==1 && i==0)
			{
			ganacia=ganacia+5;
			
			}else if(i!=0 || i!=4)
			{
			if (cine[i][j]==1)
			{
			ganacia=ganacia+3.5;
			}
				
			}else if(cine[i][j]==1 && i==4)
			{
			ganacia=ganacia+2.5;	
			}
	      }
	    }
	    //mostramos las ganacias
	   printf("Las ganacias actuales son "); 
	   printf("%f",ganacia);		
	  }
	
	printf("Menu de opciones\n 1.-Desea comprar una entrada\n 2.-Mostrar ganacias\n 3.-Salir\n");
    scanf("%d",&opcion);
}while(opcion!=3);
	return 0;
	}
