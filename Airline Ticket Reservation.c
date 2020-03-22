#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char vuelo[5] = " ";
char name[5] = " ";
int asientos[6][32];

void iniciar_matriz()
{
  for(int i=0; i<32; i++)
  {
    for(int j=0; j<6; j++)
    {
      asientos[j][i] = 0;
    }
  }
}

 void enter()
    {
      char c = ' ';
      printf("\nPresione Enter para volver a Menu\n");
      getchar();
      if(c == ' ')
      {
        getchar();
      }
       system("@cls||clear");
    }
int numero_columna(char columna)
{
 if(columna == 'A')
 {
   return 0;
 }
 else if(columna == 'B')
 {
   return 1;
 }
 else if(columna == 'C')
 {
   return 2;
 }
 else if(columna == 'D')
 {
   return 3;
 }
 else if(columna == 'E')
 {
   return 4;
 }
 else if(columna == 'F')
 {
   return 5;
 }
 else
 {
   return 6;
 }
}

int numero_fila(int numero1, int numero2)
{
  int numero=0;
  for(int i=48; i<=57; i++)
  {
   
    if(i == numero1)
    {
      numero1 = numero;
    }

    if(i == numero2)
    {
      numero2 = numero;
    }
     numero++;
  }

  if(numero2 != 88)
  {
    numero1 = numero1 *10;
    numero1 = numero1 + numero2;
   
    return numero1;
  }
  else
  {
    return numero1;
  }
}


int main(void) {
  iniciar_matriz();
  while(1)
  {
   printf("Ingrese Numero de Vuelo (5 caracteres): ");
   scanf("%s", vuelo);
   if(strlen(vuelo)!=5)
   {
    printf("\033[0;31m"); 
    printf("Tiene que ingresar un vuelo de 5 caracteres\n\n");
    printf("\033[0m"); 
   }
   else
   {
     break;
   }
  }
  int menu = 0;
  while(1)
  {
    //menu---------------------------------------------------------------
    printf("\033[0;32m"); 
    printf("\n------------------------------------------------------\n");
    printf("Bienvenido al TRv1                       Vuelo: %s\n\n",vuelo);
    printf("1. Reservar asiento\n");
    printf("2. Ver asiento disponible\n");
    printf("3. Ver resumen\n");
    printf("4. Salir\n");
    printf("------------------------------------------------------\n");
    printf("\033[0m"); 
    //--------------------------------------------------------------------

  //Opcion----------------------------------------------------------------
    printf("Ingrese Opcion: ");
    scanf("%d",&menu);
    printf("\n");
  //----------------------------------------------------------------------
  

  //opcion1---------------------------------------------------------------
    if(menu == 1)
    {
      while(1)
      {
       char asiento[3] = "";
       int fila=0;
       int columna=0;
       printf("\033[01;33m"); 
       printf("------------------------------------------------------\n");
       printf("Vuelo: %s\n\n",vuelo);
       printf("Ingrese asiento a reservar: ");
       scanf("%s",asiento);
       printf("------------------------------------------------------\n");
       printf("\033[0m"); 
       columna = numero_columna(toupper(asiento[0]));
       if(strlen(asiento) != 2)
       {
         fila = (numero_fila(asiento[1], asiento[2]))-1;
       }
       else
       {
         fila = (numero_fila(asiento[1],88))-1;
       }
        if(asientos[columna][fila] == 0)
       {
         printf("\033[1;32m");
         printf("Asiento '%s' reservado exitosamente!!\n",asiento);
         printf("------------------------------------------------------\n");
         printf("\033[0m"); 
         asientos[columna][fila] =1;
         enter();
         break;
       }
       else
       {
         printf("\033[0;31m");
          printf("Asiento '%s' ya reservado, ingrese otro asiento\n",asiento);
          printf("------------------------------------------------------\n\n\n");
          printf("\033[0m"); 
          
       }
      }  
    }
  //----------------------------------------------------------------------
  //OPCION2---------------------------------------------------------------
   if(menu == 2)
   {
     printf("\033[1;36m"); 
      printf("|    | A | B | C | D | E | F |\n");
      printf("-----------------------------\n");
      for(int i=0; i<32; i++)
      {
        if(i<9)
        {
           printf("| %d  ",i+1);
        }
        else
        {
          printf("| %d ", i+1);
        }
      
       for(int j=0; j<6; j++)
       {
          if(asientos[j][i] == 1)
          {
            printf("| ");
            printf("\033[0;31m"); 
            printf("%d ",asientos[j][i]);
            printf("\033[1;36m");
          }
          else
          {
            printf("\033[1;36m");
           printf("| %d ",asientos[j][i]);
          }

       }
       printf("|");
       printf("\n");
      }
      printf("\033[0m");
      enter();
   }
  //----------------------------------------------------------------------
  
  }
  return 0;
}