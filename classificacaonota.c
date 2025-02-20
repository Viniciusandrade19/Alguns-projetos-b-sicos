#include <stdio.h>

int main (){
 
   int nota;

   printf("difite sua nota:");
      scanf ("%d", &nota);

      //A >= 90
      //B >= 80 
      //C >= 70
      //D >= 60
      //E >= 50
      //F >= 

  if(nota >= 90){
    printf("sua  nota e classe A!\n");
  }else if(nota >= 80){
    printf("sua classe e B!\n");
  }else if (nota >= 70){
    printf("sua classe e C!\n");
  }else if(nota >= 60){
    printf("sua classe e D!\n");
  }else if(nota >= 50){
    printf("sua classe e E!\n");
  }else{
    printf("sua classe e F!\n");
  }


}