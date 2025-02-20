#include <stdio.h>

int main (){

    int nota;
     printf("digite sua nota:");
     scanf ("%d", &nota);

      //A >= 90
      //B >= 80 
      //C >= 70
      //D >= 60
      //E >= 50
      //F >= 

if (nota <= 40){
    printf("sua nota e class F!\n");
}else if(nota >= 50){
    printf("sua nota e calss E!\n");
}else if(nota >= 60){
    printf("sua nota e class D\n");
}else if(nota >= 70){
    printf("sua nota e class C!\n");
}else if (nota >= 80){
    printf("sua nota e class B!\n");
}else{
    printf("sua nota e class A!\n");
}

}