#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vuelo[5] = " ";


int main(void) {
  printf("Ingrese Numero de Vuelo (5 caracteres): ");
  scanf("%s", vuelo);
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