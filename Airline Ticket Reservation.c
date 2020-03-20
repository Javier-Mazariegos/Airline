#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vuelo[5] = " ";
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
  }
  return 0;
}